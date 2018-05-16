require 'tk'
root = TkRoot.new { title "Hello, World!" }
TkLabel.new(root) do
   text 'Hello, World!'
   pack { padx 100 ; pady 100; side 'right' }
end
Tk.mainloop
