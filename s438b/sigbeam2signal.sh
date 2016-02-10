#!/bin/bash
# for conversion of neuland SIG_BEAM directives to ucesb SIGNAL
awk 'NR>1{sam=substr($16,4,1);
	gtb=substr($16,9,1);
	addr=substr($16,14,2);
	ch=$18;
	chm1=ch-1;
	print "SIGNAL("$2"TAC, neuland_tacq.data_sam"sam"_gtb"gtb".tac["int(addr)"]["chm1"], DATA12);";
	print "SIGNAL("$2"CLK, neuland_tacq.data_sam"sam"_gtb"gtb".clk["int(addr)"]["chm1"], DATA12);";
	print "SIGNAL("$2"ADC, neuland_tacq.data_sam"sam"_gtb"gtb".adc["int(addr)"]["chm1"], DATA12);";
	if($20!="NONE") {
		print "SIGNAL("$2"T, neuland_tacq.data_sam"sam"_gtb"gtb".tac["int(addr)"][16], DATA12);";
	}
}' $1
