
##############################
# Country definition for MLY #
##############################

province = { id = 1351 ic = 1 } # ジョホールバール
province =
{ id         = 1352
  ic         = 6
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # クアラルンプール
province = { id = 1553 ic = 1 } # コタバル
province =
{ id         = 1644
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
  ic         = 2
}              # クチン

#####################
# Country main data #
#####################

country =
{ tag                 = MLY
  manpower            = 95
  energy              = 1400
  metal               = 1400
  rare_materials      = 1400
  oil                 = 1400
  supplies            = 1000
  money               = 500
  capital             = 1352
  regular_id          = U04
  transports          = 65
  escorts             = 45
  policy              = { democratic = 3 political_left = 2 freedom = 4 free_market = 3 professional_army = 3 defense_lobby = 8 interventionism = 7 }
  ownedprovinces      = { 1349 1350 1351 1352 1553 1554 1644 1647 }
  controlledprovinces = { 1349 1350 1351 1352 1553 1554 1644 1647 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  nationalprovinces   = { 1349 1350 1351 1352 1553 1554 1644 1647 }
}
