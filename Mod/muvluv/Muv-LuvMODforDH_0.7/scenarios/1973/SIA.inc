
##############################
# Country definition for SIA #
##############################

province =
{ id         = 1289
  anti_air   = 1
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
}              # ソンクラー
province = { id = 1331 ic = 1 } # コンケーン
province = { id = 1342 ic = 3 } # チョンブリ
province = { id = 1343 ic = 9 } # バンコク
province =
{ id         = 1345
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
}              # ナコーンサワン
province = { id = 1348 ic = 3 } # ナコンシータマラート

#####################
# Country main data #
#####################

country =
{ tag                 = SIA
  energy              = 500
  metal               = 500
  rare_materials      = 500
  oil                 = 200
  supplies            = 200
  manpower            = 145
  transports          = 30
  escorts             = 8
  capital             = 1343
  regular_id          = U04
  money               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  ownedprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1289 }
  controlledprovinces = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1289 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  nationalprovinces   = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1289 }
}
