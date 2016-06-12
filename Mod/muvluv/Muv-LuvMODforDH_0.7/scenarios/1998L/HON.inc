
##############################
# Country definition for HON #
##############################

province =
{ id         = 760
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 1 current_size = 1 }
  ic         = 4
}              # ÉeÉOÉVÉKÉãÉp

#####################
# Country main data #
#####################

country =
{ tag                 = HON
  manpower            = 3
  transports          = 24
  escorts             = 4
  energy              = 500
  metal               = 500
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  capital             = 760
  regular_id          = U09
  money               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 4
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  ownedprovinces      = { 760 }
  controlledprovinces = { 760 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  nationalprovinces   = { 760 }
  landunit =
  { id       = { type = 9501 id = 6047 }
    name     = "ëÊ1åRíc"
    location = 760
    home     = 760
    mission  = { type = none target = 760 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 9501 id = 6049 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 9501 id = 6050 }
    name     = "ëÊ2åRíc"
    location = 760
    home     = 760
    mission  = { type = none target = 760 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 9501 id = 6052 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 9502 id = 6053 }
    name     = "ëÊ3êÌë‡"
    location = 760
    home     = 760
    base     = 760
    division =
    { id       = { type = 9502 id = 6055 }
      name     = "ëÊ1É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
}
