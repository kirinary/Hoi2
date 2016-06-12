
##############################
# Country definition for VIE #
##############################

province =
{ id         = 1326
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
}              # ハイフォン
province =
{ id       = 1333
  anti_air = 4
  air_base = { size = 2 current_size = 2 }
}            # ハノイ
province =
{ id         = 1337
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
  supplypool = 1000
  oilpool    = 500
}              # サイゴン

#####################
# Country main data #
#####################

country =
{ tag                 = VIE
  manpower            = 50
  energy              = 100
  metal               = 50
  rare_materials      = 25
  oil                 = 50
  supplies            = 200
  money               = 100
  capital             = 1333
  regular_id          = U04
  nationalprovinces   = { 1328 1333 1334 1335 1337 1338 1326 }
  ownedprovinces      = { 1328 1333 1334 1335 1337 1338 1326 }
  controlledprovinces = { 1328 1333 1334 1335 1337 1338 1326 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy              = { democratic = 2 political_left = 3 freedom = 4 free_market = 3 professional_army = 9 defense_lobby = 8 interventionism = 7 }
}
