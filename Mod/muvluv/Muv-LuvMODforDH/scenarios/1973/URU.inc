
##############################
# Country definition for URU #
##############################

province =
{ id         = 849
  ic         = 8
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}              # ƒ‚ƒ“ƒeƒrƒfƒI

#####################
# Country main data #
#####################

country =
{ tag                 = URU
  oil                 = 500
  metal               = 500
  energy              = 500
  rare_materials      = 500
  supplies            = 200
  manpower            = 7
  transports          = 10
  escorts             = 2
  capital             = 849
  regular_id          = U08

  nationalprovinces   = { 833 849 }
  ownedprovinces      = { 833 849 }
  controlledprovinces = { 833 849 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  landunit =
  { id       = { type = 22501 id = 6289 }
    name     = "‘æ1ŒR’c"
    location = 849
    home     = 849
    #mission  = { type = none target = 849 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 22501 id = 6291 }
      name          = "‘æ1©‘–x‰‡’S•Ût’c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 22501 id = 6292 }
    name     = "‘æ2ŒR’c"
    location = 849
    home     = 849
    #mission  = { type = none target = 849 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 22501 id = 6294 }
      name          = "‘æ1‹@ŠB‰»•à•ºt’c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 22502 id = 8381 }
    name     = "‘æ3í‘à"
    location = 849
    home     = 849
    base     = 849
    division =
    { id       = { type = 22502 id = 6297 }
      name     = "‘æ1ƒ~ƒTƒCƒ‹’øt’c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 22502 id = 8383 }
    name     = "‘æ4í‘à"
    location = 849
    home     = 849
    base     = 849
    division =
    { id       = { type = 22502 id = 6298 }
      name     = "‘æ2ƒ~ƒTƒCƒ‹’øt’c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 22502 id = 8385 }
    name     = "‘æ5í‘à"
    location = 849
    home     = 849
    base     = 849
    division =
    { id       = { type = 22502 id = 6299 }
      name     = "‘æ1—A‘—ŠÍ/—g—¤ŠÍt’c"
      model    = 3
      type     = transport
      strength            = 100
    }
  }
}
