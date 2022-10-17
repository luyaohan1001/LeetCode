#usr/bin/perl

use warnings;

sub fibonacci {
    my ($num) = @_;
    if ($num == 1 || $num == 2) {
        return $num;
    } else {
        return fibonacci($num - 1) + fibonacci($num - 2);
    }

}

my ($input_num) = @ARGV;

# Input small number because this is exponential time algorithm.
print(fibonacci($input_num) . "\n");