/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package com.example.android.hellosharedprefs;

import android.content.SharedPreferences;
import android.graphics.drawable.ColorDrawable;
import android.support.v4.content.ContextCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

/**
 *  HelloSharedPrefs is an adaptation of the HelloToast app from chapter 1. It includes:
 *  - A more flexible layout.
 *  - Buttons for changing the background color.
 *  - Maintenance of instance state.
 *  - Themes and styles.
 *  - Read and write shared preferences for the current count and the color.
 */
public class MainActivity extends AppCompatActivity {
    // Current count.
    private int mCount = 0;
    // Current background color.
    private int mColor;
    // Text view to display both count and color.
    private TextView mShowCountTextView;

    // Shared preferences object
    private SharedPreferences mPreferences;
    // Name of shared preferences file
    private static final String mSharedPrefFile = "com.example.android.hellosharedprefs";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Initialize views, color, preferences
        mShowCountTextView = (TextView) findViewById(R.id.count_textview);
        mColor = ContextCompat.getColor(this, R.color.default_background);
        mPreferences = getSharedPreferences(mSharedPrefFile, MODE_PRIVATE);

        // Restore the saved state. See onSaveInstanceState() for what gets saved.
        if (savedInstanceState != null) {
            mCount = savedInstanceState.getInt("count");
            if (mCount != 0) {
                mShowCountTextView.setText(String.format("%s", mCount));
            }

            mColor = savedInstanceState.getInt("color");
            mShowCountTextView.setBackgroundColor(mColor);
        }
        else {
            // Restore preferences
            mCount = mPreferences.getInt("count", 0);
            mShowCountTextView.setText(String.format("%s", mCount));

            mColor = mPreferences.getInt("color", mColor);
            mShowCountTextView.setBackgroundColor(mColor);
        }
    }

    /**
     * Handles the onClick for the background color buttons.  Gets background color of the button
     * that was clicked and sets the textview background to that color.
     *
     * @param view The view (Button) that was clicked.
     */
    public void changeBackground(View view) {
        int color = ((ColorDrawable) view.getBackground()).getColor();
        mShowCountTextView.setBackgroundColor(color);
        mColor = color;
    }

    /**
     * Handles the onClick for the Count button.  Increments the value of the mCount global and
     * updates the textview.
     *
     * @param view The view (Button) that was clicked.
     */
    public void countUp(View view) {
        mCount++;
        mShowCountTextView.setText(String.format("%s", mCount));
    }

    /**
     * Saves the instance state if the activity is restarted (for example, on device rotation.)
     * Here you save the values for the count and the background color.
     *
     * @param outState The state data.
     */
    @Override
    protected void onSaveInstanceState(Bundle outState) {
        super.onSaveInstanceState(outState);

        outState.putInt("count", mCount);
        outState.putInt("color", mColor);
    }

    /**
     * Callback for activity pause.  Shared preferences are saved in this callback.
     */
    @Override
    protected void onPause(){
        super.onPause();

        SharedPreferences.Editor preferencesEditor = mPreferences.edit();
        preferencesEditor.putInt("count", mCount);
        preferencesEditor.putInt("color", mColor);
        preferencesEditor.apply();
    }

    /**
     * Handles the onClick for the Reset button.  Resets the global count and background
     * variables to the defaults, resets the views to those values, and clears the shared
     * preferences
     *
     * @param view The view (Button) that was clicked.
     */
    public void reset(View view) {
        // Reset count
        mCount = 0;
        mShowCountTextView.setText(String.format("%s", mCount));

        // Reset color
        mColor = ContextCompat.getColor(this, R.color.default_background);
        mShowCountTextView.setBackgroundColor(mColor);

        // Clear shared preferences
        SharedPreferences.Editor preferencesEditor = mPreferences.edit();
        preferencesEditor.clear();
        preferencesEditor.apply();

    }
}
