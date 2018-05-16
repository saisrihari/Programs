#!/srihari-Vostro-14-3468/opt/ActivePerl/bin/perl
%array = ("foo", "26", "bar", "27");
@values = values(%array);
print("@values\n");
foreach $i (values (%array)) {
   print $i . "\n";
}
