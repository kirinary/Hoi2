
##############################
# Country definition for BUR #
##############################

province = { id = 1297 ic = 2 } # シットウェ
province = { id = 1298 ic = 2 } # パテイン
province =
{ id         = 1299
  anti_air   = 3
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
  ic         = 9
}              # ラングーン
province =
{ id       = 1300
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  ic       = 1
}            # マンダレー
province = { id = 1301 ic = 1 } # バゴー
province = { id = 1302 ic = 1 } # モーラミャイン

#####################
# Country main data #
#####################

country =
{ tag                 = BUR
  manpower            = 32
  energy              = 500
  metal               = 500
  rare_materials      = 500
  oil                 = 500
  supplies            = 80000
  money               = 100
  capital             = 1299
  regular_id          = U04
  transports          = 50
  escorts             = 15
  nationalprovinces   = { 1290 1291 1292 1297 1298 1299 1300 1301 1302 1304 1346 1295 1296 1305 1898 1294 1905 }
  ownedprovinces      = { 1290 1291 1292 1297 1298 1299 1300 1301 1302 1304 1346 1295 1296 1305 }
  controlledprovinces = { 1290 1291 1292 1297 1298 1299 1300 1301 1302 1304 1346 1295 1296 1305 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy              = { democratic = 3 political_left = 2 freedom = 7 free_market = 3 professional_army = 8 defense_lobby = 8 interventionism = 6 }
}
