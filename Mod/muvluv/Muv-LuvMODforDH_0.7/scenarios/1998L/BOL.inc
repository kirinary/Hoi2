
##############################
# Country definition for BOL #
##############################

province = { id = 828 ic = 3 } # ƒRƒrƒn
province =
{ id       = 832
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  ic       = 9
}            # ƒ‰ƒpƒX
province = { id = 836 ic = 2 } # ƒgƒŠƒjƒ_
province = { id = 838 ic = 4 } # ƒXƒNƒŒ

#####################
# Country main data #
#####################

country =
{ tag                 = BOL
  manpower            = 8
  energy              = 5000
  metal               = 5000
  rare_materials      = 500
  oil                 = 2000
  supplies            = 80000
  capital             = 832
  regular_id          = U08

  transports          = 15
  escorts             = 10
  money               = 200
  policy              = { democratic = 3 political_left = 4 freedom = 6 free_market = 7 professional_army = 2 defense_lobby = 3 interventionism = 4 }
  ownedprovinces      = { 827 828 832 836 838 }
  controlledprovinces = { 827 828 832 836 838 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  nationalprovinces   = { 827 828 832 836 838 }
  landunit =
  { id       = { type = 2001 id = 6277 }
    name     = "‘æ1ŒR’c"
    location = 832
    home     = 832
    mission  = { type = none target = 832 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 2001 id = 6279 }
      name          = "‘æ1Ž©‘–Žx‰‡’S•ÛŽt’c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 2001 id = 6280 }
    name     = "‘æ2ŒR’c"
    location = 832
    home     = 832
    mission  = { type = none target = 832 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 2001 id = 6282 }
      name          = "‘æ1‹@ŠB‰»•à•ºŽt’c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
}
