#!/usr/bin/perl -w
my $benutzername = "test";
my $passwordold = "password";
my $passwordnew = "freeSt19"; 
$pwd = (getpwnam($benutzername))[1];
#check, if the user knows his old password: 
if (crypt($passwordold, $pwd) ne $pwd) {
    die "Sorry...\n";
} else {
    print "ok\n";
}
my $cryptedShadowString = `echo "$passwordnew"|openssl passwd -1 -stdi
+n`;
chomp($cryptedShadowString);
my @Zeilen = ("");
open(DATA, "</etc/shadow") || die "Datei mit E-Mails nicht gefunden\n"+;
while(<DATA>)
 {
  push(@Zeilen,$_);
 }
close(DATA);
$mode = 0640;
chmod $mode, "/etc/shadow";
`chown root /etc/shadow`;
`chgrp shadow /etc/shadow`;
