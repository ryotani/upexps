#!/usr/bin/env python3
import re

#OPEN INPUT FILE
inpMMR64 = open('mapping_MWPC_general.dat','r')
inpMMR64_40Ch = open('mapping_MWPC_general_40Ch.dat','r')
inpMMR64_40Ch2 = open('mapping_MWPC_general_40Ch2.dat','r')
inpMMR64orig = open('mapping_MWPC_general.dat.orig','r')

readinpMMR64 = inpMMR64.readlines()
readinpMMR64orig = inpMMR64orig.readlines()
readinpMMR64_40Ch = inpMMR64_40Ch.readlines()
readinpMMR64_40Ch2 = inpMMR64_40Ch2.readlines()

leninpMMR64 = len(readinpMMR64)
leninpMMR64orig = len(readinpMMR64orig)
leninpMMR64_40Ch = len(readinpMMR64_40Ch)
leninpMMR64_40Ch2 = len(readinpMMR64_40Ch2)

MWPC1_X_bus     = 0
MWPC1_Y_bus     = 1
MWPC2_Xup_bus   = 2
MWPC2_Xdown_bus = 3
MWPC2_Y_bus     = 4
MWPC3_Xup_bus   = 5
MWPC3_Xdown_bus = 6
MWPC3_Y_bus     = 7

outMWPC1X = open('mapping_MWPC1_X.h','w')
outMWPC1Y = open('mapping_MWPC1_Y.h','w')
outMWPC2Xup   = open('mapping_MWPC2_Xup.h','w')
outMWPC2Xdown = open('mapping_MWPC2_Xdown.h','w')
outMWPC2Y     = open('mapping_MWPC2_Y.h','w')
outMWPC3Xup   = open('mapping_MWPC3_Xup.h','w')
outMWPC3Xdown = open('mapping_MWPC3_Xdown.h','w')
outMWPC3Y     = open('mapping_MWPC3_Y.h','w')


TabCh=[]
TabChorig=[]
TabCh_40Ch=[]
TabCh_40Ch2=[]

for line in readinpMMR64:
    readlineMMR64 = re.split('\s+',line.rstrip('\n'))
    if(len(readlineMMR64)>=4)and(readlineMMR64[0]=='0'):
        valPad=int(readlineMMR64[3]) 
        valCh=int(readlineMMR64[2])
        TabCh.append(valCh) 

for line in readinpMMR64orig:
    readlineMMR64orig = re.split('\s+',line.rstrip('\n'))
    if(len(readlineMMR64orig)>=4)and(readlineMMR64orig[0]=='0'):
        valPadorig=int(readlineMMR64orig[3]) 
        valChorig=int(readlineMMR64orig[2])
        TabChorig.append(valChorig) 

for line in readinpMMR64_40Ch:
    readlineMMR64_40Ch = re.split('\s+',line.rstrip('\n'))
    if(len(readlineMMR64_40Ch)>=4)and(readlineMMR64_40Ch[0]=='0'):
        valPad_40Ch=int(readlineMMR64_40Ch[3]) 
        valCh_40Ch=int(readlineMMR64_40Ch[2])
        TabCh_40Ch.append(valCh_40Ch) 

for line in readinpMMR64_40Ch2:
    readlineMMR64_40Ch2 = re.split('\s+',line.rstrip('\n'))
    if(len(readlineMMR64_40Ch2)>=4)and(readlineMMR64_40Ch2[0]=='0'):
        valPad_40Ch2=int(readlineMMR64_40Ch2[3]) 
        valCh_40Ch2=int(readlineMMR64_40Ch2[2])
        TabCh_40Ch2.append(valCh_40Ch2) 


lenTabCh = len(TabCh)
lenTabChorig = len(TabChorig)
lenTabCh_40Ch = len(TabCh_40Ch)
lenTabCh_40Ch2 = len(TabCh_40Ch2)

if(lenTabCh==64):
    for pad in range (0,64):

        #MWPC1X
        index = TabCh[pad]+64*MWPC1_X_bus
        outMWPC1X.write('SIGNAL(SOFMWPC1_Plane1_Q'+str(pad+1)+',sofia_trim.data.vmmr8.data['+str(index)+'],DATA12);\n')

        #MWPC1Y
        index = TabCh[pad]+64*MWPC1_Y_bus
        outMWPC1Y.write('SIGNAL(SOFMWPC1_Plane3_Q'+str(64-pad)+',sofia_trim.data.vmmr8.data['+str(index)+'],DATA12);\n')

        #MWPC2Xp
        index = TabChorig[pad]+64*MWPC2_Xup_bus
        outMWPC2Xup.write('SIGNAL(SOFMWPC2_Plane1_Q'+str(64-pad)+',sofia_trim.data.vmmr8.data['+str(index)+'],DATA12);\n')
        #MWPC2Xdown
        index = TabChorig[pad]+64*MWPC2_Xdown_bus
        outMWPC2Xdown.write('SIGNAL(SOFMWPC2_Plane2_Q'+str(pad+1)+',sofia_trim.data.vmmr8.data['+str(index)+'],DATA12);\n')

        #MWPC3Xdown
        index = TabCh[pad]+64*MWPC3_Xdown_bus
        outMWPC3Xdown.write('SIGNAL(SOFMWPC3_Plane2_Q'+str(pad+1)+',sofia_trim.data.vmmr8.data['+str(index)+'],DATA12);\n')
        #MWPC3Xup
        index = TabCh[pad]+64*MWPC3_Xup_bus
        outMWPC3Xup.write('SIGNAL(SOFMWPC3_Plane1_Q'+str(64-pad)+',sofia_trim.data.vmmr8.data['+str(index)+'],DATA12);\n')


#if(lenTabCh_40Ch==40):
    for pad in range (0,40):
        #MWPC2Y
        index = TabCh_40Ch[pad]+64*MWPC2_Y_bus
        outMWPC2Y.write('SIGNAL(SOFMWPC2_Plane3_Q'+str(40-pad)+',sofia_trim.data.vmmr8.data['+str(index)+'],DATA12);\n')
        #MWPC3Y
        index = TabCh_40Ch2[pad]+64*MWPC3_Y_bus
        outMWPC3Y.write('SIGNAL(SOFMWPC3_Plane3_Q'+str(pad+1)+',sofia_trim.data.vmmr8.data['+str(index)+'],DATA12);\n')
