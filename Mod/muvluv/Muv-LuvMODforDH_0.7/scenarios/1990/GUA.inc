
##############################
# Country definition for GUA #
##############################

province =
{ id         = 757
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 1 current_size = 1 }
  ic         = 4
}              # ÉOÉAÉeÉ}ÉâÉVÉeÉB

#####################
# Country main data #
#####################

country =
{ tag                 = GUA
  manpower            = 7
  transports          = 24
  escorts             = 6
  energy              = 500
  metal               = 500
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  capital             = 757
  regular_id          = U09
  money               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 8
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  ownedprovinces      = { 757 }
  controlledprovinces = { 757 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  nationalprovinces   = { 757 }
  landunit =
  { id       = { type = 8501 id = 6038 }
    name     = "ëÊ1åRíc"
    location = 757
    home     = 757
    mission  = { type = none target = 757 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 8501 id = 6040 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 8501 id = 6041 }
    name     = "ëÊ2åRíc"
    location = 757
    home     = 757
    mission  = { type = none target = 757 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 8501 id = 6043 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 8502 id = 6044 }
    name     = "ëÊ3êÌë‡"
    location = 757
    home     = 757
    base     = 757
    division =
    { id       = { type = 8502 id = 6046 }
      name     = "ëÊ1É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
}
