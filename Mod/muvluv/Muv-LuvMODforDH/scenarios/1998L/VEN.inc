
##############################
# Country definition for VEN #
##############################

province = { id = 802 ic = 2 } # ƒoƒ‹ƒLƒVƒƒg
province =
{ id         = 804
  anti_air   = 2
  ic         = 2
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}              # ƒ}ƒ‰ƒJƒCƒ{
province = { id = 810 ic = 4 } # ƒ}ƒgƒDƒŠƒ“
province = { id = 811 ic = 1 } # ƒoƒŠƒiƒX
province =
{ id       = 870
  anti_air = 2
  ic       = 9
  air_base = { size = 2 current_size = 2 }
}            # ƒJƒ‰ƒJƒX

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
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
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
  landunit =
  { id       = { type = 23501 id = 6220 }
    name     = "‘æ1ŒR’c"
    location = 804
    home     = 804
    mission  = { type = none target = 804 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 23501 id = 6222 }
      name          = "‘æ1©‘–x‰‡’S•Ût’c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 23501 id = 6223 }
    name     = "‘æ2ŒR’c"
    location = 870
    home     = 870
    mission  = { type = none target = 870 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 23501 id = 6225 }
      name          = "‘æ2©‘–x‰‡’S•Ût’c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 23501 id = 6226 }
    name     = "‘æ3ŒR’c"
    location = 870
    home     = 870
    mission  = { type = none target = 870 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 23501 id = 6228 }
      name          = "‘æ1‹@ŠB‰»•à•ºt’c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
    division =
    { id            = { type = 23501 id = 6229 }
      name          = "‘æ1•à•ºíÔt’c"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 23502 id = 2590 }
    name     = "‘æ1í‘à"
    location = 804
    home     = 804
    base     = 804
    division =
    { id       = { type = 23502 id = 6230 }
      name     = "‘æ1ƒ~ƒTƒCƒ‹’øt’c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 23502 id = 8329 }
    name     = "‘æ3í‘à"
    location = 802
    home     = 802
    division =
    { id       = { type = 23502 id = 6231 }
      name     = "‘æ1—A‘—ŠÍ/—g—¤ŠÍt’c"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
}
