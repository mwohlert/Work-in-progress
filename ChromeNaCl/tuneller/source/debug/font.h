#pragma once

const unsigned char font[256*14] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (00 000)   
  0xff, 0xff, 0x81, 0x7e, 0x5a, 0x7e, 0x7e, 0x42, 0x66, 0x7e, 0x81, 0xff, 0xff, 0xff, // (01 001)   
  0xff, 0xff, 0x81, 0x00, 0x24, 0x00, 0x00, 0x3c, 0x18, 0x00, 0x81, 0xff, 0xff, 0xff, // (02 002)   
  0xff, 0xff, 0xff, 0xc9, 0x80, 0x80, 0x80, 0x80, 0xc1, 0xe3, 0xf7, 0xff, 0xff, 0xff, // (03 003)   
  0xff, 0xff, 0xff, 0xf7, 0xe3, 0xc1, 0x80, 0xc1, 0xe3, 0xf7, 0xff, 0xff, 0xff, 0xff, // (04 004)   
  0xff, 0xff, 0xe7, 0xc3, 0xc3, 0x18, 0x18, 0x18, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, // (05 005)   
  0xff, 0xff, 0xe7, 0xc3, 0x81, 0x00, 0x00, 0x81, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, // (06 006)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xc3, 0xc3, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, // (07 007)   
  0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // (08 008)   
  0xff, 0xff, 0xff, 0xff, 0xc3, 0x99, 0xbd, 0xbd, 0x99, 0xc3, 0xff, 0xff, 0xff, 0xff, // (09 009)   
  0x00, 0x00, 0x00, 0x00, 0x3c, 0x66, 0x42, 0x42, 0x66, 0x3c, 0x00, 0x00, 0x00, 0x00, // (0a 010)   
  0xff, 0xff, 0xf0, 0xf8, 0xf2, 0xe6, 0xc3, 0x99, 0x99, 0x99, 0xc3, 0xff, 0xff, 0xff, // (0b 011)   
  0xff, 0xff, 0xc3, 0x99, 0x99, 0x99, 0xc3, 0xe7, 0x81, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (0c 012)   
  0xff, 0xff, 0xc0, 0xcc, 0xc0, 0xcf, 0xcf, 0xcf, 0x8f, 0x0f, 0x1f, 0xff, 0xff, 0xff, // (0d 013)   
  0xff, 0xff, 0x80, 0x9c, 0x80, 0x9c, 0x9c, 0x9c, 0x98, 0x18, 0x19, 0x3f, 0xff, 0xff, // (0e 014)   
  0xff, 0xff, 0xe7, 0xe7, 0x24, 0xc3, 0x18, 0xc3, 0x24, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (0f 015)   
  0xff, 0xff, 0xbf, 0x9f, 0x8f, 0x83, 0x80, 0x83, 0x8f, 0x9f, 0xbf, 0xff, 0xff, 0xff, // (10 016)   
  0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xe0, 0x80, 0xe0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, // (11 017)   
  0xff, 0xff, 0xe7, 0xc3, 0x81, 0xe7, 0xe7, 0xe7, 0x81, 0xc3, 0xe7, 0xff, 0xff, 0xff, // (12 018)   
  0xff, 0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xff, 0xcc, 0xcc, 0xff, 0xff, 0xff, // (13 019)   
  0xff, 0xff, 0x80, 0x24, 0x24, 0x24, 0x84, 0xe4, 0xe4, 0xe4, 0xe4, 0xff, 0xff, 0xff, // (14 020)   
  0xff, 0xc1, 0x9c, 0xcf, 0xe3, 0xc9, 0x9c, 0x9c, 0xc9, 0xe3, 0xf9, 0x9c, 0xc1, 0xff, // (15 021)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x80, 0x80, 0xff, 0xff, 0xff, // (16 022)   
  0xff, 0xff, 0xe7, 0xc3, 0x81, 0xe7, 0xe7, 0xe7, 0x81, 0xc3, 0xe7, 0x81, 0xff, 0xff, // (17 023)   
  0xff, 0xff, 0xe7, 0xc3, 0x81, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (18 024)   
  0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x81, 0xc3, 0xe7, 0xff, 0xff, 0xff, // (19 025)   
  0xff, 0xff, 0xff, 0xff, 0xf3, 0xf9, 0x80, 0xf9, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, // (1a 026)   
  0xff, 0xff, 0xff, 0xff, 0xe7, 0xcf, 0x80, 0xcf, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, // (1b 027)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x9f, 0x9f, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, // (1c 028)   
  0xff, 0xff, 0xff, 0xff, 0xdb, 0x99, 0x00, 0x99, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, // (1d 029)   
  0xff, 0xff, 0xff, 0xf7, 0xe3, 0xe3, 0xc1, 0xc1, 0x80, 0x80, 0xff, 0xff, 0xff, 0xff, // (1e 030)   
  0xff, 0xff, 0xff, 0x80, 0x80, 0xc1, 0xc1, 0xe3, 0xe3, 0xf7, 0xff, 0xff, 0xff, 0xff, // (1f 031)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (20 032)   
  0xff, 0xff, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0xe7, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (21 033) ! 
  0xff, 0x9c, 0x9c, 0x9c, 0xdd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (22 034) " 
  0xff, 0xff, 0xc9, 0xc9, 0x80, 0xc9, 0xc9, 0xc9, 0x80, 0xc9, 0xc9, 0xff, 0xff, 0xff, // (23 035) # 
  0xf3, 0xf3, 0xc1, 0x9c, 0x9e, 0x9f, 0xc1, 0xfc, 0xbc, 0x9c, 0xc1, 0xf3, 0xf3, 0xff, // (24 036) $ 
  0xff, 0xff, 0xff, 0xff, 0x9e, 0x9c, 0xf9, 0xf3, 0xe7, 0xcc, 0x9c, 0xff, 0xff, 0xff, // (25 037) % 
  0xff, 0xff, 0xe3, 0xc9, 0xc9, 0xe3, 0xc4, 0x91, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (26 038) & 
  0xff, 0xcf, 0xcf, 0xcf, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (27 039) ' 
  0xff, 0xff, 0xf3, 0xe7, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xe7, 0xf3, 0xff, 0xff, 0xff, // (28 040) ( 
  0xff, 0xff, 0xe7, 0xf3, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf3, 0xe7, 0xff, 0xff, 0xff, // (29 041) ) 
  0xff, 0xff, 0xff, 0xff, 0x99, 0xc3, 0x00, 0xc3, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, // (2a 042) * 
  0xff, 0xff, 0xff, 0xe7, 0xe7, 0xe7, 0x00, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xff, // (2b 043) + 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xcf, 0xff, 0xff, // (2c 044) , 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (2d 045) - 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (2e 046) . 
  0xff, 0xff, 0xfe, 0xfc, 0xf9, 0xf3, 0xe7, 0xcf, 0x9f, 0xbf, 0xff, 0xff, 0xff, 0xff, // (2f 047) / 
  0xff, 0xff, 0xc1, 0x9c, 0x98, 0x90, 0x84, 0x8c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (30 048) 0 
  0xff, 0xff, 0xf3, 0xe3, 0xc3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xc0, 0xff, 0xff, 0xff, // (31 049) 1 
  0xff, 0xff, 0xc1, 0x9c, 0xfc, 0xf9, 0xf3, 0xe7, 0xcf, 0x9c, 0x80, 0xff, 0xff, 0xff, // (32 050) 2 
  0xff, 0xff, 0xc1, 0x9c, 0xfc, 0xfc, 0xe1, 0xfc, 0xfc, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (33 051) 3 
  0xff, 0xff, 0xf9, 0xf1, 0xe1, 0xc9, 0x99, 0x80, 0xf9, 0xf9, 0xf0, 0xff, 0xff, 0xff, // (34 052) 4 
  0xff, 0xff, 0x80, 0x9f, 0x9f, 0x9f, 0x81, 0xfc, 0xfc, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (35 053) 5 
  0xff, 0xff, 0xe3, 0xcf, 0x9f, 0x9f, 0x81, 0x9c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (36 054) 6 
  0xff, 0xff, 0x80, 0x9c, 0xfc, 0xf9, 0xf3, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (37 055) 7 
  0xff, 0xff, 0xc1, 0x9c, 0x9c, 0x9c, 0xc1, 0x9c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (38 056) 8 
  0xff, 0xff, 0xc1, 0x9c, 0x9c, 0x9c, 0xc0, 0xfc, 0xfc, 0xf9, 0xc3, 0xff, 0xff, 0xff, // (39 057) 9 
  0xff, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xff, // (3a 058) : 
  0xff, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xcf, 0xff, 0xff, 0xff, // (3b 059) ; 
  0xff, 0xff, 0xf9, 0xf3, 0xe7, 0xcf, 0x9f, 0xcf, 0xe7, 0xf3, 0xf9, 0xff, 0xff, 0xff, // (3c 060) < 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, // (3d 061) = 
  0xff, 0xff, 0x9f, 0xcf, 0xe7, 0xf3, 0xf9, 0xf3, 0xe7, 0xcf, 0x9f, 0xff, 0xff, 0xff, // (3e 062) > 
  0xff, 0xff, 0xc1, 0x9c, 0x9c, 0xf9, 0xf3, 0xf3, 0xff, 0xf3, 0xf3, 0xff, 0xff, 0xff, // (3f 063) ? 
  0xff, 0xff, 0xc1, 0x9c, 0x9c, 0x90, 0x90, 0x90, 0x91, 0x9f, 0xc1, 0xff, 0xff, 0xff, // (40 064) @ 
  0xff, 0xff, 0xf7, 0xe3, 0xc9, 0x9c, 0x9c, 0x80, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, // (41 065) A 
  0xff, 0xff, 0x81, 0xcc, 0xcc, 0xcc, 0xc1, 0xcc, 0xcc, 0xcc, 0x81, 0xff, 0xff, 0xff, // (42 066) B 
  0xff, 0xff, 0xe1, 0xcc, 0x9e, 0x9f, 0x9f, 0x9f, 0x9e, 0xcc, 0xe1, 0xff, 0xff, 0xff, // (43 067) C 
  0xff, 0xff, 0x83, 0xc9, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc9, 0x83, 0xff, 0xff, 0xff, // (44 068) D 
  0xff, 0xff, 0x80, 0xcc, 0xce, 0xcb, 0xc3, 0xcb, 0xce, 0xcc, 0x80, 0xff, 0xff, 0xff, // (45 069) E 
  0xff, 0xff, 0x80, 0xcc, 0xce, 0xcb, 0xc3, 0xcb, 0xcf, 0xcf, 0x87, 0xff, 0xff, 0xff, // (46 070) F 
  0xff, 0xff, 0xe1, 0xcc, 0x9e, 0x9f, 0x9f, 0x90, 0x9c, 0xcc, 0xe2, 0xff, 0xff, 0xff, // (47 071) G 
  0xff, 0xff, 0x9c, 0x9c, 0x9c, 0x9c, 0x80, 0x9c, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, // (48 072) H 
  0xff, 0xff, 0xc3, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, // (49 073) I 
  0xff, 0xff, 0xf0, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x99, 0x99, 0xc3, 0xff, 0xff, 0xff, // (4a 074) J 
  0xff, 0xff, 0x8c, 0xcc, 0xc9, 0xc9, 0xc3, 0xc9, 0xc9, 0xcc, 0x8c, 0xff, 0xff, 0xff, // (4b 075) K 
  0xff, 0xff, 0x87, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xce, 0xcc, 0x80, 0xff, 0xff, 0xff, // (4c 076) L 
  0xff, 0xff, 0x3c, 0x18, 0x00, 0x24, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0xff, 0xff, 0xff, // (4d 077) M 
  0xff, 0xff, 0x9c, 0x8c, 0x84, 0x80, 0x90, 0x98, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, // (4e 078) N 
  0xff, 0xff, 0xe3, 0xc9, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0xc9, 0xe3, 0xff, 0xff, 0xff, // (4f 079) O 
  0xff, 0xff, 0x81, 0xcc, 0xcc, 0xcc, 0xc1, 0xcf, 0xcf, 0xcf, 0x87, 0xff, 0xff, 0xff, // (50 080) P 
  0xff, 0xff, 0xc1, 0x9c, 0x9c, 0x9c, 0x9c, 0x94, 0x90, 0xc1, 0xf9, 0xf8, 0xff, 0xff, // (51 081) Q 
  0xff, 0xff, 0x81, 0xcc, 0xcc, 0xcc, 0xc1, 0xc9, 0xcc, 0xcc, 0x8c, 0xff, 0xff, 0xff, // (52 082) R 
  0xff, 0xff, 0xc1, 0x9c, 0x9c, 0xcf, 0xe3, 0xf9, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (53 083) S 
  0xff, 0xff, 0x00, 0x24, 0x66, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, // (54 084) T 
  0xff, 0xff, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (55 085) U 
  0xff, 0xff, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x99, 0xc3, 0xe7, 0xff, 0xff, 0xff, // (56 086) V 
  0xff, 0xff, 0x3c, 0x3c, 0x3c, 0x3c, 0x24, 0x24, 0x00, 0x99, 0x99, 0xff, 0xff, 0xff, // (57 087) W 
  0xff, 0xff, 0x3c, 0x3c, 0x99, 0xc3, 0xe7, 0xc3, 0x99, 0x3c, 0x3c, 0xff, 0xff, 0xff, // (58 088) X 
  0xff, 0xff, 0x3c, 0x3c, 0x3c, 0x99, 0xc3, 0xe7, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, // (59 089) Y 
  0xff, 0xff, 0x00, 0x3c, 0x79, 0xf3, 0xe7, 0xcf, 0x9e, 0x3c, 0x00, 0xff, 0xff, 0xff, // (5a 090) Z 
  0xff, 0xff, 0xc3, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xc3, 0xff, 0xff, 0xff, // (5b 091) [ 
  0xff, 0xff, 0xbf, 0x9f, 0x8f, 0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, // (5c 092) 
  0xff, 0xff, 0xc3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xc3, 0xff, 0xff, 0xff, // (5d 093) ] 
  0xf7, 0xe3, 0xc9, 0x9c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (5e 094) ^ 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, // (5f 095) _ 
  0xe7, 0xe7, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (60 096) ` 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xf9, 0xc1, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (61 097) a 
  0xff, 0xff, 0x8f, 0xcf, 0xcf, 0xc3, 0xc9, 0xcc, 0xcc, 0xcc, 0x91, 0xff, 0xff, 0xff, // (62 098) b 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x9c, 0x9f, 0x9f, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (63 099) c 
  0xff, 0xff, 0xf1, 0xf9, 0xf9, 0xe1, 0xc9, 0x99, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (64 100) d 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x9c, 0x80, 0x9f, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (65 101) e 
  0xff, 0xff, 0xe3, 0xc9, 0xcd, 0xcf, 0x83, 0xcf, 0xcf, 0xcf, 0x87, 0xff, 0xff, 0xff, // (66 102) f 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc4, 0x99, 0x99, 0x99, 0xc1, 0xf9, 0x99, 0xc3, 0xff, // (67 103) g 
  0xff, 0xff, 0x8f, 0xcf, 0xcf, 0xc9, 0xc4, 0xcc, 0xcc, 0xcc, 0x8c, 0xff, 0xff, 0xff, // (68 104) h 
  0xff, 0xff, 0xf3, 0xf3, 0xff, 0xe3, 0xf3, 0xf3, 0xf3, 0xf3, 0xe1, 0xff, 0xff, 0xff, // (69 105) i 
  0xff, 0xff, 0xf9, 0xf9, 0xff, 0xf1, 0xf9, 0xf9, 0xf9, 0xf9, 0x99, 0x99, 0xc3, 0xff, // (6a 106) j 
  0xff, 0xff, 0x8f, 0xcf, 0xcf, 0xcc, 0xc9, 0xc3, 0xc9, 0xcc, 0x8c, 0xff, 0xff, 0xff, // (6b 107) k 
  0xff, 0xff, 0xe3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xe1, 0xff, 0xff, 0xff, // (6c 108) l 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x19, 0x00, 0x24, 0x24, 0x24, 0x24, 0xff, 0xff, 0xff, // (6d 109) m 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xff, 0xff, 0xff, // (6e 110) n 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x9c, 0x9c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (6f 111) o 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0xcc, 0xcc, 0xcc, 0xc1, 0xcf, 0xcf, 0x87, 0xff, // (70 112) p 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc4, 0x99, 0x99, 0x99, 0xc1, 0xf9, 0xf9, 0xf0, 0xff, // (71 113) q 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0xc4, 0xcc, 0xcf, 0xcf, 0x87, 0xff, 0xff, 0xff, // (72 114) r 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x9c, 0xc7, 0xf1, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (73 115) s 
  0xff, 0xff, 0xf7, 0xe7, 0xe7, 0x81, 0xe7, 0xe7, 0xe7, 0xe4, 0xf1, 0xff, 0xff, 0xff, // (74 116) t 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0x99, 0x99, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (75 117) u 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x3c, 0x3c, 0x99, 0xc3, 0xe7, 0xff, 0xff, 0xff, // (76 118) v 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x3c, 0x24, 0x24, 0x00, 0x99, 0xff, 0xff, 0xff, // (77 119) w 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x9c, 0xc9, 0xe3, 0xe3, 0xc9, 0x9c, 0xff, 0xff, 0xff, // (78 120) x 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x9c, 0x9c, 0x9c, 0x9c, 0xc0, 0xfc, 0xf9, 0xc3, 0xff, // (79 121) y 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x99, 0xf3, 0xe7, 0xcc, 0x80, 0xff, 0xff, 0xff, // (7a 122) z 
  0xff, 0xff, 0xf1, 0xe7, 0xe7, 0xe7, 0x8f, 0xe7, 0xe7, 0xe7, 0xf1, 0xff, 0xff, 0xff, // (7b 123) { 
  0xff, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (7c 124) | 
  0xff, 0xff, 0x8f, 0xe7, 0xe7, 0xe7, 0xf1, 0xe7, 0xe7, 0xe7, 0x8f, 0xff, 0xff, 0xff, // (7d 125) } 
  0xff, 0xff, 0xc4, 0x91, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (7e 126) ~ 
  0xff, 0xff, 0xff, 0xff, 0xf7, 0xe3, 0xc9, 0x9c, 0x9c, 0x80, 0xff, 0xff, 0xff, 0xff, // (7f 127)   
  0xff, 0xff, 0xe1, 0xcc, 0x9e, 0x9f, 0x9f, 0x9e, 0xcc, 0xe1, 0xf9, 0xfc, 0xc1, 0xff, // (80 128)   
  0xff, 0xff, 0x99, 0x99, 0xff, 0x99, 0x99, 0x99, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (81 129)   
  0xff, 0xf9, 0xf3, 0xe7, 0xff, 0xc1, 0x9c, 0x80, 0x9f, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (82 130)   
  0xff, 0xf7, 0xe3, 0xc9, 0xff, 0xc3, 0xf9, 0xc1, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (83 131)   
  0xff, 0xff, 0x99, 0x99, 0xff, 0xc3, 0xf9, 0xc1, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (84 132)   
  0xff, 0xcf, 0xe7, 0xf3, 0xff, 0xc3, 0xf9, 0xc1, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (85 133)   
  0xff, 0xe3, 0xc9, 0xe3, 0xff, 0xc3, 0xf9, 0xc1, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (86 134)   
  0xff, 0xff, 0xff, 0xff, 0xc3, 0x99, 0x9f, 0x99, 0xc3, 0xf3, 0xf9, 0xc3, 0xff, 0xff, // (87 135)   
  0xff, 0xf7, 0xe3, 0xc9, 0xff, 0xc1, 0x9c, 0x80, 0x9f, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (88 136)   
  0xff, 0xff, 0x99, 0x99, 0xff, 0xc1, 0x9c, 0x80, 0x9f, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (89 137)   
  0xff, 0xcf, 0xe7, 0xf3, 0xff, 0xc1, 0x9c, 0x80, 0x9f, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (8a 138)   
  0xff, 0xff, 0x99, 0x99, 0xff, 0xc7, 0xe7, 0xe7, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, // (8b 139)   
  0xff, 0xe7, 0xc3, 0x99, 0xff, 0xc7, 0xe7, 0xe7, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, // (8c 140)   
  0xff, 0x9f, 0xcf, 0xe7, 0xff, 0xc7, 0xe7, 0xe7, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, // (8d 141)   
  0xff, 0x9c, 0x9c, 0xf7, 0xe3, 0xc9, 0x9c, 0x9c, 0x80, 0x9c, 0x9c, 0xff, 0xff, 0xff, // (8e 142)   
  0xe3, 0xc9, 0xe3, 0xff, 0xe3, 0xc9, 0x9c, 0x9c, 0x80, 0x9c, 0x9c, 0xff, 0xff, 0xff, // (8f 143)   
  0xf3, 0xe7, 0xcf, 0xff, 0x80, 0xcc, 0xcf, 0xc1, 0xcf, 0xcc, 0x80, 0xff, 0xff, 0xff, // (90 144)   
  0xff, 0xff, 0xff, 0xff, 0x91, 0xc4, 0xe4, 0x81, 0x27, 0x23, 0x88, 0xff, 0xff, 0xff, // (91 145)   
  0xff, 0xff, 0xe0, 0xc9, 0x99, 0x99, 0x80, 0x99, 0x99, 0x99, 0x98, 0xff, 0xff, 0xff, // (92 146)   
  0xff, 0xf7, 0xe3, 0xc9, 0xff, 0xc1, 0x9c, 0x9c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (93 147)   
  0xff, 0xff, 0x9c, 0x9c, 0xff, 0xc1, 0x9c, 0x9c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (94 148)   
  0xff, 0xcf, 0xe7, 0xf3, 0xff, 0xc1, 0x9c, 0x9c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (95 149)   
  0xff, 0xe7, 0xc3, 0x99, 0xff, 0x99, 0x99, 0x99, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (96 150)   
  0xff, 0xcf, 0xe7, 0xf3, 0xff, 0x99, 0x99, 0x99, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (97 151)   
  0xff, 0xff, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0x9c, 0xc0, 0xfc, 0xf9, 0xc3, 0xff, // (98 152)   
  0xff, 0x9c, 0x9c, 0xe3, 0xc9, 0x9c, 0x9c, 0x9c, 0x9c, 0xc9, 0xe3, 0xff, 0xff, 0xff, // (99 153)   
  0xff, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (9a 154)   
  0xff, 0xe7, 0xe7, 0x81, 0x3c, 0x3f, 0x3f, 0x3c, 0x81, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (9b 155)   
  0xff, 0xe3, 0xc9, 0xcd, 0xcf, 0x87, 0xcf, 0xcf, 0xcf, 0x8c, 0x81, 0xff, 0xff, 0xff, // (9c 156)   
  0xff, 0xff, 0x3c, 0x99, 0xc3, 0xe7, 0x00, 0xe7, 0x00, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (9d 157)   
  0xff, 0x03, 0x99, 0x99, 0x83, 0x9d, 0x99, 0x90, 0x99, 0x99, 0x0c, 0xff, 0xff, 0xff, // (9e 158)   
  0xff, 0xf1, 0xe4, 0xe7, 0xe7, 0xe7, 0x81, 0xe7, 0xe7, 0xe7, 0xe7, 0x27, 0x8f, 0xff, // (9f 159)   
  0xff, 0xf3, 0xe7, 0xcf, 0xff, 0xc3, 0xf9, 0xc1, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (a0 160)   
  0xff, 0xf3, 0xe7, 0xcf, 0xff, 0xc7, 0xe7, 0xe7, 0xe7, 0xe7, 0xc3, 0xff, 0xff, 0xff, // (a1 161)   
  0xff, 0xf3, 0xe7, 0xcf, 0xff, 0xc1, 0x9c, 0x9c, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (a2 162)   
  0xff, 0xf3, 0xe7, 0xcf, 0xff, 0x99, 0x99, 0x99, 0x99, 0x99, 0xc4, 0xff, 0xff, 0xff, // (a3 163)   
  0xff, 0xff, 0xc4, 0x91, 0xff, 0x91, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xff, 0xff, 0xff, // (a4 164)   
  0xc4, 0x91, 0xff, 0x9c, 0x8c, 0x84, 0x80, 0x90, 0x98, 0x9c, 0x9c, 0xff, 0xff, 0xff, // (a5 165)   
  0xff, 0xc3, 0x93, 0x93, 0xc1, 0xff, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (a6 166)   
  0xff, 0xc7, 0x93, 0x93, 0xc7, 0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (a7 167)   
  0xff, 0xff, 0xe7, 0xe7, 0xff, 0xe7, 0xe7, 0xcf, 0x9c, 0x9c, 0xc1, 0xff, 0xff, 0xff, // (a8 168)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x9f, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xff, // (a9 169)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, // (aa 170)   
  0xff, 0x9f, 0x1f, 0x9c, 0x99, 0x93, 0xe7, 0xcf, 0x91, 0x3c, 0xf9, 0xf3, 0xe0, 0xff, // (ab 171)   
  0xff, 0x9f, 0x1f, 0x9c, 0x99, 0x93, 0xe7, 0xcc, 0x98, 0x30, 0xe0, 0xfc, 0xfc, 0xff, // (ac 172)   
  0xff, 0xff, 0xe7, 0xe7, 0xff, 0xe7, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0xff, 0xff, 0xff, // (ad 173)   
  0xff, 0xff, 0xff, 0xff, 0xe4, 0xc9, 0x93, 0xc9, 0xe4, 0xff, 0xff, 0xff, 0xff, 0xff, // (ae 174)   
  0xff, 0xff, 0xff, 0xff, 0x93, 0xc9, 0xe4, 0xc9, 0x93, 0xff, 0xff, 0xff, 0xff, 0xff, // (af 175)   
  0xee, 0xbb, 0xee, 0xbb, 0xee, 0xbb, 0xee, 0xbb, 0xee, 0xbb, 0xee, 0xbb, 0xee, 0xbb, // (b0 176)   
  0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, // (b1 177)   
  0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88, // (b2 178)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (b3 179)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x07, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (b4 180)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x07, 0xe7, 0x07, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (b5 181)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0x09, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (b6 182)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (b7 183)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xe7, 0x07, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (b8 184)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0x09, 0xf9, 0x09, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (b9 185)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (ba 186)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xf9, 0x09, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (bb 187)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0x09, 0xf9, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (bc 188)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (bd 189)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x07, 0xe7, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (be 190)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (bf 191)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (c0 192)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (c1 193)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (c2 194)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe0, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (c3 195)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (c4 196)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x00, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (c5 197)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe0, 0xe7, 0xe0, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (c6 198)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc8, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (c7 199)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc8, 0xcf, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (c8 200)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xcf, 0xc8, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (c9 201)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0x08, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (ca 202)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x08, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (cb 203)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc8, 0xcf, 0xc8, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (cc 204)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (cd 205)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0x08, 0xff, 0x08, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (ce 206)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (cf 207)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (d0 208)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x00, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (d1 209)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (d2 210)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (d3 211)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe0, 0xe7, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (d4 212)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe7, 0xe0, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (d5 213)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (d6 214)   
  0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0x00, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, // (d7 215)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x00, 0xe7, 0x00, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (d8 216)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (d9 217)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (da 218)   
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (db 219)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (dc 220)   
  0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, // (dd 221)   
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, // (de 222)   
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (df 223)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc4, 0x91, 0x93, 0x93, 0x91, 0xc4, 0xff, 0xff, 0xff, // (e0 224)   
  0xff, 0xff, 0xff, 0xff, 0xc1, 0x9c, 0x81, 0x9c, 0x9c, 0x81, 0x9f, 0x9f, 0xdf, 0xff, // (e1 225)   
  0xff, 0xff, 0x80, 0x9c, 0x9c, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xff, 0xff, 0xff, // (e2 226)   
  0xff, 0xff, 0xff, 0xff, 0x80, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xff, 0xff, 0xff, // (e3 227)   
  0xff, 0xff, 0x80, 0x9c, 0xcf, 0xe7, 0xf3, 0xe7, 0xcf, 0x9c, 0x80, 0xff, 0xff, 0xff, // (e4 228)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x93, 0x93, 0x93, 0x93, 0xc7, 0xff, 0xff, 0xff, // (e5 229)   
  0xff, 0xff, 0xff, 0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xc1, 0xcf, 0xcf, 0x9f, 0xff, 0xff, // (e6 230)   
  0xff, 0xff, 0xff, 0xff, 0xc4, 0x91, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xff, 0xff, 0xff, // (e7 231)   
  0xff, 0xff, 0x81, 0xe7, 0xc3, 0x99, 0x99, 0x99, 0xc3, 0xe7, 0x81, 0xff, 0xff, 0xff, // (e8 232)   
  0xff, 0xff, 0xe3, 0xc9, 0x9c, 0x9c, 0x80, 0x9c, 0x9c, 0xc9, 0xe3, 0xff, 0xff, 0xff, // (e9 233)   
  0xff, 0xff, 0xe3, 0xc9, 0x9c, 0x9c, 0x9c, 0xc9, 0xc9, 0xc9, 0x88, 0xff, 0xff, 0xff, // (ea 234)   
  0xff, 0xff, 0xe1, 0xcf, 0xe7, 0xf3, 0xc1, 0x99, 0x99, 0x99, 0xc3, 0xff, 0xff, 0xff, // (eb 235)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0x24, 0x24, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, // (ec 236)   
  0xff, 0xff, 0xfc, 0xf9, 0x81, 0x24, 0x24, 0x0c, 0x81, 0x9f, 0x3f, 0xff, 0xff, 0xff, // (ed 237)   
  0xff, 0xff, 0xe3, 0xcf, 0x9f, 0x9f, 0x83, 0x9f, 0x9f, 0xcf, 0xe3, 0xff, 0xff, 0xff, // (ee 238)   
  0xff, 0xff, 0xff, 0xc1, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, // (ef 239)   
  0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0x80, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xff, // (f0 240)   
  0xff, 0xff, 0xe7, 0xe7, 0xe7, 0x00, 0xe7, 0xe7, 0xe7, 0xff, 0x00, 0xff, 0xff, 0xff, // (f1 241)   
  0xff, 0xff, 0xcf, 0xe7, 0xf3, 0xf9, 0xf3, 0xe7, 0xcf, 0xff, 0x81, 0xff, 0xff, 0xff, // (f2 242)   
  0xff, 0xff, 0xf3, 0xe7, 0xcf, 0x9f, 0xcf, 0xe7, 0xf3, 0xff, 0x81, 0xff, 0xff, 0xff, // (f3 243)   
  0xff, 0xff, 0xf1, 0xe4, 0xe4, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, // (f4 244)   
  0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x27, 0x27, 0x8f, 0xff, 0xff, 0xff, // (f5 245)   
  0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0x00, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0xff, // (f6 246)   
  0xff, 0xff, 0xff, 0xff, 0xc4, 0x91, 0xff, 0xc4, 0x91, 0xff, 0xff, 0xff, 0xff, 0xff, // (f7 247)   
  0xff, 0xc7, 0x93, 0x93, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (f8 248)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (f9 249)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (fa 250)   
  0xff, 0xf0, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0x13, 0x93, 0xc3, 0xe3, 0xff, 0xff, 0xff, // (fb 251)   
  0xff, 0x27, 0x93, 0x93, 0x93, 0x93, 0x93, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (fc 252)   
  0xff, 0x8f, 0x27, 0xcf, 0x9f, 0x37, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // (fd 253)   
  0xff, 0xff, 0xff, 0xff, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xff, 0xff, 0xff, 0xff, // (fe 254)   
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff  // (ff 255)   
};


const unsigned char* GetFont(unsigned char Code)
{
	return font + (Code*14);
}
