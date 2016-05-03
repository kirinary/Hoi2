
##############################
# Country definition for U02 #
##############################
province =
{ id         = 32
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # ブレスト
province =
{ id         = 34
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
}              # ロリアン
province =
{ id         = 35
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
}              # ナント
province =
{ id         = 38
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # シェルブール
province = { id = 39 anti_air = 1 } # カーン
province =
{ id       = 44
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
}            # リール
province =
{ id       = 56
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
}            # パリ
province =
{ id         = 59
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # ボルドー
province =
{ id       = 60
  air_base = { size = 4 current_size = 4 }
}            # ポワチエ
province =
{ id       = 62
  air_base = { size = 4 current_size = 4 }
}            # オルレアン
province =
{ id       = 72
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  landfort = 10
}            # メス
province = { id = 73 anti_air = 2 landfort = 10 } # ストラスブール
province =
{ id       = 360
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # ヴィシー
province =
{ id         = 364
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # マルセイユ
province =
{ id          = 365
  anti_air    = 5
  air_base    = { size = 4 current_size = 4 }
  naval_base  = { size = 10 current_size = 10 }
  landfort    = 3
  coastalfort = 2
}               # トゥーロン
province = { id = 366 landfort = 3 } # ニース

#####################
# Country main data #
#####################

country =
{ tag                 = FRA
  manpower            = 4250
  energy              = 58000
  metal               = 36000
  rare_materials      = 45000
  oil                 = 12000
  supplies            = 8000
  money               = 3500
  capital             = 56
  transports          = 1800
  escorts             = 1500
  regular_id          = U02
  nationalprovinces   = { 18 32 33 34 35 36 37 38 39 40 41 42 43 44 54 55 56 57 58 59 60 61 62 63 64 72 73 316 317 318 319 320 321 322 323 
                         324 325 326 327 328 358 359 360 361 362 363 364 365 366 367 527 528 529 841 1022 1643 1676 2242 2509 2514 2555 2557 }
  ownedprovinces      = { 18 32 33 34 35 36 37 38 39 40 41 42 43 44 54 55 56 57 58 59 60 61 62 63 64 72 73 316 317 318 319 320 321 322 323 
                         324 325 326 327 328 358 359 360 361 362 363 364 365 366 367 527 528 529 841 1022 1643 1676 2242 2509 2514 2555 2557 1037 875 }
  controlledprovinces = { 18 32 33 34 35 36 37 38 39 40 41 42 43 44 54 55 56 57 58 59 60 61 62 63 64 72 73 316 317 318 319 320 321 322 323 
                         324 325 326 327 328 358 359 360 361 362 363 364 365 366 367 527 528 529 841 1022 1643 1676 2242 2509 2514 2555 2557 1037 875 }
  techapps            = { 10050 10060 1010  10190 1020  10200 1030    1110  1120 
                          1210  1220  1470  1490  1510  1530  1550  1560  1650  1660
                          1750  1760  1850  1860  1950  1960
                          3010  3020  30410 30420 30510 30520 3110 
                          3120  3210  3220  3460  3470  40200 40210  3310  3320  3610  3620  3710  3720  7500  7510  7520  7530  7540  7670  7680  7690  7700
                          3560      3910  3920
                          3940  40100 40110 4390  4400  4010  4020  4110  4120  4210  4220  4640  4650  4820  4830
                          4560  50020 50030   50070 50080  5010    50120 5020  50290 50300 50310
                          5090  5100  5170  5180  5250  5260  5330  5340  5410  5420
                          5490  5500  5600  5610  5680  5690  5760  5770  5780  5790  5800  5810
                          5910  5920  7010  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  8320  8330  9010  90140
                          90190 9020  9030  9040  9050  9060  9070  9190  9200  9210  9340  9350  9360  9370  9380  9390  9400  9520  9530  9540 
                          9550  9670  9680  9690  9700  9710  9720  9840  9850  9860  9990  2000  2210  3000  4000  5000  7030  7040
                        }
  inventions          = { 8009 8011 }
  policy =
  { democratic        = 10
    political_left    = 2
    freedom           = 9
    free_market       = 9
    professional_army = 9
    defense_lobby     = 10
    interventionism   = 9
  }
landunit = {
	name = "第1機甲師団"
	id = { type = 10030 id = 1 }
	location = 64
	division = {
	id = { type = 10030 id = 2 }
	name = "第1戦車大隊"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 3 }
	name = "第2戦車大隊"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 4 }
	name = "第3戦車大隊"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 5 }
	name = "第1機械化歩兵大隊"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 6 }
	name = "第2機械化歩兵大隊"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 7 }
	name = "第3機械化歩兵大隊"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
landunit = {
	name = "第2機甲師団"
	id = { type = 10030 id = 8 }
	location = 62
	division = {
	id = { type = 10030 id = 9 }
	name = "第4戦車大隊"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 10 }
	name = "第5戦車大隊"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 11 }
	name = "第6戦車大隊"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 12 }
	name = "第4機械化歩兵大隊"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 13 }
	name = "第5機械化歩兵大隊"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 14 }
	name = "第6機械化歩兵大隊"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
landunit = {
	name = "第7機甲師団"
	id = { type = 10030 id = 15 }
	location = 1643
	division = {
	id = { type = 10030 id = 16 }
	name = "第7戦車大隊"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 17 }
	name = "第8戦車大隊"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 18 }
	name = "第9戦車大隊"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 19 }
	name = "第7機械化歩兵大隊"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 20 }
	name = "第8機械化歩兵大隊"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 10030 id = 21 }
	name = "第9機械化歩兵大隊"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
}
