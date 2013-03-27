#! /usr/bin/perl
use strict;
use warnings;


my $filepath="/etc/bash.bashrc";

open(my $fh, "<", $filepath);
	
while(<$fh>){
	if($_ !~/^#/){
		print $_;
	
	
}

close ($fh);

