#!/usr/bin/perl
use strict ;
use warnings;

my @arrays=("jaya","nita",3);

#print @array;
#print $arrays[0] . "\n";
#print $arrays[1];
#print $arrays[2];

print scalar \@arrays;
my %fruits=("apple" => "too sweet", "mango"=>"yellow","banana"=>"lactose","quit"=>"exit");
print $fruits{"apple"};
print $fruits{"mango"};
my $fruit_list={"apple" => "too sweet", "mango"=>"yellow","banana"=>"lactose","quit"=>"exit"};

print"\n". $fruit_list->{"apple"}."\n";
#print \$fruits
