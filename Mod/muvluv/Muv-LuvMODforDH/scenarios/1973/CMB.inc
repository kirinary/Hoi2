
##############################
# Country definition for CMB #
##############################

province =
{ id         = 1339
  ic         = 3
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # プノンペン
province = { id = 1340 ic = 2 } # シェムリアップ

#####################
# Country main data #
#####################

country =
{ tag                 = CMB
  manpower            = 54
  energy              = 800
  metal               = 800
  rare_materials      = 800
  oil                 = 800
  supplies            = 80000
  money               = 520
  capital             = 1339
  regular_id          = U04
  transports          = 100
  escorts             = 15
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 9
    free_market       = 10
    freedom           = 10
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
  ownedprovinces      = { 1339 1340 1341 }
  controlledprovinces = { 1339 1340 1341 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  nationalprovinces   = { 1339 1340 1341 }
}
