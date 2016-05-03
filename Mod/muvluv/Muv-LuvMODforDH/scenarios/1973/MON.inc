
##############################
# Country definition for MON #
##############################

province = { id = 1385 ic = 3 } # チョイバルサン
province =
{ id       = 1404
  air_base = { size = 1 current_size = 1 }
  ic       = 6
}            # ウランバートル
province = { id = 1419 ic = 1 } # モロン
province = { id = 1420 ic = 1 } # ウルギー
province = { id = 1434 ic = 1 } # バヤンホンゴル

#####################
# Country main data #
#####################

country =
{ tag                 = MON
  energy              = 200
  metal               = 200
  rare_materials      = 100
  oil                 = 200
  supplies            = 500
  manpower            = 35
  capital             = 1404
  regular_id          = U06
  money               = 100
  nationalprovinces   = { 1385 1404 1419 1420 1434 1438 }
  ownedprovinces      = { 1385 1404 1419 1420 1434 1438 }
  controlledprovinces = { 1385 1404 1419 1420 1434 1438 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
}
