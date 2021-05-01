# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    generator.pl                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 10:04:43 by tsomeya           #+#    #+#              #
#    Updated: 2021/02/01 10:06:11 by tsomeya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
print "\n";
}
