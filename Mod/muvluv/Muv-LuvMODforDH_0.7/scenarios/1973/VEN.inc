
##############################
# Country definition for VEN #
##############################

province = { id = 802 ic = 2 } # バルキシメト
province =
{ id         = 804
  anti_air   = 2
  ic         = 2
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}              # マラカイボ
province = { id = 810 ic = 4 } # マトゥリン
province = { id = 811 ic = 1 } # バリナス
province =
{ id       = 870
  anti_air = 2
  ic       = 9
  air_base = { size = 2 current_size = 2 }
}            # カラカス

#####################
# Country main data #
#####################

country =
{ tag                 = VEN
  energy              = 3500
  metal               = 3500
  rare_materials      = 250
  oil                 = 3500
  supplies            = 350
  manpower            = 12
  transports          = 12
  escorts             = 2
  capital             = 870
  regular_id          = U08

  money               = 100
  nationalprovinces   = { 802 804 810 811 869 870 }
  ownedprovinces      = { 802 804 810 811 869 870 }
  controlledprovinces = { 802 804 810 811 869 870 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 7
    freedom           = 5
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 3
  }
}
