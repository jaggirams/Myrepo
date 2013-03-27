#! /usr/bin/perl

use strict ;
use warnings;
#my @temp_array;
#my @array=("my","name","is","jaya");

#my $var=print join("*",@array) ."\n";
#my @new_array= split($var,"*");

#foreach (@new_array){
#	print $_ ."\n";
#} 

#my $filename= "file.txt";

#open(my $fh, "<", $filename);

#while(<$fh>){

#if($_ !~ s/\D//) 
#	push($fh,@temp_array);
#}


#close ($fh);

#print @temp_array;

my $student={"name"=>"jaya", "age"=>"20", "subject"=>["english","maths","cs"]};

foreach(keys% $student){
	print $_:$student $_;
}
