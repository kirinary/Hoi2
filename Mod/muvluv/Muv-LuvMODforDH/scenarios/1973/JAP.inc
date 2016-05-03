
##############################
# Country definition for JAP #
##############################

province = { id = 1174 air_base = 5 ic = 3 } # ÂXŒ§
province = { id = 1177 naval_base = 5 air_base = 3 } # –kç“‡
province = { id = 1179 naval_base = 10 air_base = 10 ic = 2 } # –kŠC“¹
province = { id = 1180 air_base = 5 ic = 3 } # H“cŒ§
province = { id = 1181 ic = 2 } # ŠâèŒ§
province = { id = 1182 ic = 1 } # RŒ`Œ§
province = { id = 1183 ic = 2 air_base = 5 } # ‹{éŒ§
province = { id = 1184 ic = 2 naval_base = 5 air_base = 5 } # VŠƒŒ§
province = { id = 1185 naval_base = 10 air_base = 5 } # ²“n“‡
province = { id = 1186 ic = 1 } # •Ÿ“‡Œ§
province = { id = 1187 ic = 3 } # ˆïéŒ§
province = { id = 1189 ic = 2 } # ŒQ”nŒ§
province = { id = 1190 air_base = 10 } # ç—tŒ§
province = { id = 1191 ic = 15 } # é‹ÊŒ§
province = { id = 1192 ic = 17 naval_base = 10 air_base = 10 radar_station = 10 infra = 0.2 } # “Œ‹“s
province = { id = 1193 ic = 10 air_base = 10 radar_station = 10 naval_base = 10 } # _“ŞìŒ§
province = { id = 1599 naval_base = 10 air_base = 10 } # Œ³R
province = { id = 2607 ic = 1 } # Ã‰ªŒ§
province = { id = 2615 ic = 19 air_base = 10 radar_station = 10 naval_base = 10 landfort = 1 infra = 0.2 } # ‹“s•{
province = { id = 2618 naval_base = 10 air_base = 10 ic = 7 } # ‘åã•{
province = { id = 2620 air_base = 5 naval_base = 10 } # ’¹æŒ§
province = { id = 2623 ic = 5 air_base = 10 naval_base = 10 } # L“‡Œ§
province = { id = 2626 ic = 6 } # “¿“‡Œ§
province = { id = 2627 ic = 5 } # ˆ¤•QŒ§
province = { id = 2628 air_base = 3 naval_base = 5 } # ‚’mŒ§
province = { id = 2630 air_base = 3 } # ‘å•ªŒ§
province = { id = 2632 air_base = 10 naval_base = 10 ic = 2 } # ’·èŒ§
province = { id = 2633 ic = 1 } # ‹{èŒ§
province = { id = 2635 air_base = 10 naval_base = 10 ic = 4 } # ­™“‡Œ§
province = { id = 2637 air_base = 10 naval_base = 10 ic = 1 } # ‰«“êŒ§

#####################
# Country main data #
#####################

country =
{ tag                 = JAP
  manpower            = 780
  energy              = 35000
  metal               = 48000
  rare_materials      = 24000
  oil                 = 30000
  supplies            = 8000
  money               = 1200
  capital             = 2615
  transports          = 1000
  escorts             = 800
  regular_id          = U06
  #nationalidentity    = "policy_identity_parochial"
  #socialpolicy        = "policy_social_militaristic"
  #nationalculture     = "policy_culture_absolut"
  nationalprovinces   = { 1174 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1436 1437 1599 1784 1785 2607
                          2608 2609 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2624 2625 2626 2627 2628 2629 2630 2631 2632
                          2633 2634 2635 2636 2637 2640 1176
                        }
  ownedprovinces      = { 1174 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1436 1437 1599 1784 1785 2607
                          2608 2609 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2624 2625 2626 2627 2628 2629 2630 2631 2632
                          2633 2634 2635 2636 2637 2640 1176
                        }
  controlledprovinces = { 1174 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1436 1437 1599 1784 1785 2607
                          2608 2609 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2624 2625 2626 2627 2628 2629 2630 2631 2632
                          2633 2634 2635 2636 2637 2640 1176
                        }
  techapps            = { 10050 10060 1010  10190 1020  10200 1030    1110  1120 
                          1210  1220  1470  1490  1510  1530  1550  1560  1650  1660
                          1750  1760  1850  1860  1950  1960
                          3010  3020  30410 30420 30510 30520 3110 
                          3120  3210  3220  3460  3470
                          3560      3910  3920
                          3940  40100 40110 4390  4400  4010  4020  4110  4120  4210  4220  4640  4650  4820  4830
                          4560  50020 50030   50070 50080  5010    50120 5020  50290 50300 50310
                          5090  5100  5170  5180  5250  5260  5330  5340  5410  5420
                          5490  5500  5600  5610  5680  5690  5760  5770  5780  5790  5800  5810  3310  3320
                          5910  5920  7010  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  8320  8330  9010  90140
                          90190 9020  9030  9040  9050  9060  9070  9190  9200  9210  9340  9350  9360  9370  9380  9390  9400  9520  9530  9540 
                          9550  9670  9680  9690  9700  9710  9720  9840  9850  9860  9990  2000  2210  3000  4000  5000
                        }
  #inventions          = { 8000 8001 8009 8011 }
  policy              = { democratic = 3 political_left = 3 freedom = 8 free_market = 2 professional_army = 9 defense_lobby = 8 interventionism = 9 }
landunit = {
	name = "‘æ7t’c"
	id = { type = 10001 id = 101 }
	location = 1179
	division = {
	id = { type = 10001 id = 102 }
	name = "‘æ1íÔ‘å‘à"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 103 }
	name = "‘æ2íÔ‘å‘à"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 104 }
	name = "‘æ3íÔ‘å‘à"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 105 }
	name = "‘æ1‹@ŠB‰»•à•º‘å‘à"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 106 }
	name = "‘æ2‹@ŠB‰»•à•º‘å‘à"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 107 }
	name = "‘æ3‹@ŠB‰»•à•º‘å‘à"
	type = light_armor
	model = 1
	experience = 0
	}
  }
landunit = {
	name = "‘æ2t’c"
	id = { type = 10001 id = 108 }
	location = 1179
	division = {
	id = { type = 10001 id = 109 }
	name = "‘æ4íÔ‘å‘à"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 110 }
	name = "‘æ4‹@ŠB‰»•à•º‘å‘à"
	type = light_armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 111 }
	name = "‘æ5‹@ŠB‰»•à•º‘å‘à"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 112 }
	name = "‘æ6‹@ŠB‰»•à•º‘å‘à"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 113 }
	name = "‘æ7‹@ŠB‰»•à•º‘å‘à"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10001 id = 114 }
	name = "‘æ8‹@ŠB‰»•à•º‘å‘à"
	type = mechanized
	model = 1
	experience = 0
	}
  }
landunit = {
	name = "‘æ5t’c"
	id = { type = 10001 id = 8 }
	location = 1179
	division = {
	id = { type = 10001 id = 9 }
	name = "‘æ5íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 10 }
	name = "‘æ10•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 11 }
	name = "‘æ11•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 12 }
	name = "‘æ12•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ11t’c"
	id = { type = 10001 id = 13 }
	location = 1179
	division = {
	id = { type = 10001 id = 14 }
	name = "‘æ6íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 15 }
	name = "‘æ13•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 16 }
	name = "‘æ14•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 17 }
	name = "‘æ15•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ9t’c"
	id = { type = 10001 id = 18 }
	location = 1174
	division = {
	id = { type = 10001 id = 19 }
	name = "‘æ7íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 20 }
	name = "‘æ16•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 21 }
	name = "‘æ17•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 22 }
	name = "‘æ18•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ6t’c"
	id = { type = 10001 id = 23 }
	location = 1184
	division = {
	id = { type = 10001 id = 24 }
	name = "‘æ8íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 25 }
	name = "‘æ19•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 26 }
	name = "‘æ20•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 27 }
	name = "‘æ21•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ12t’c"
	id = { type = 10001 id = 28 }
	location = 1189
	division = {
	id = { type = 10001 id = 29 }
	name = "‘æ9íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 30 }
	name = "‘æ22•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 31 }
	name = "‘æ23•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 32 }
	name = "‘æ24•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ1t’c"
	id = { type = 10001 id = 33 }
	location = 1192
	division = {
	id = { type = 10001 id = 34 }
	name = "‘æ10íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 35 }
	name = "‘æ25•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 36 }
	name = "‘æ26•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 37 }
	name = "‘æ27•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ10t’c"
	id = { type = 10001 id = 38 }
	location = 2610
	division = {
	id = { type = 10001 id = 39 }
	name = "‘æ11íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 40 }
	name = "‘æ28•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 41 }
	name = "‘æ29•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 42 }
	name = "‘æ30•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ3t’c"
	id = { type = 10001 id = 43 }
	location = 2618
	division = {
	id = { type = 10001 id = 44 }
	name = "‘æ12íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 45 }
	name = "‘æ31•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 46 }
	name = "‘æ32•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 47 }
	name = "‘æ33•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
  }
}
landunit = {
	name = "‘æ13t’c"
	id = { type = 10001 id = 48 }
	location = 2623
	division = {
	id = { type = 10001 id = 49 }
	name = "‘æ13íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 50 }
	name = "‘æ34•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 51 }
	name = "‘æ35•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 52 }
	name = "‘æ36•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ4t’c"
	id = { type = 10001 id = 53 }
	location = 2629
	division = {
	id = { type = 10001 id = 54 }
	name = "‘æ14íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 55 }
	name = "‘æ37•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 56 }
	name = "‘æ38•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 57 }
	name = "‘æ39•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ8t’c"
	id = { type = 10001 id = 58 }
	location = 2634
	division = {
	id = { type = 10001 id = 59 }
	name = "‘æ15íÔ‘å‘à"
	type = armor
	model = 1
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 60 }
	name = "‘æ40•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 61 }
	name = "‘æ41•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 62 }
	name = "‘æ42•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
}
landunit = {
	name = "‘æ1¬¬’c"
	id = { type = 10001 id = 63 }
	location = 2637
	division = {
	id = { type = 10001 id = 64 }
	name = "‘æ35•à•º‘å‘à"
	type = mechanized
	model = 22
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 65 }
	name = "‘æ36•à•º‘å‘à"
	type = mechanized
	model = 22
	#experience = 50
	}
	division = {
	id = { type = 10001 id = 66 }
	name = "‘æ37•à•º‘å‘à"
	type = mechanized
	model = 23
	#experience = 50
	}
  }
}
