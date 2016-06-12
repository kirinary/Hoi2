
##############################
# Country definition for SAL #
##############################

province =
{ id         = 759
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
  ic         = 4
}              # ÉTÉìÉTÉãÉoÉhÉã

#####################
# Country main data #
#####################

country =
{ tag                 = SAL
  energy              = 500
  metal               = 500
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  manpower            = 5
  transports          = 10
  escorts             = 2
  capital             = 759
  regular_id          = U09

  money               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  ownedprovinces      = { 759 }
  controlledprovinces = { 759 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  nationalprovinces   = { 759 }
  landunit =
  { id       = { type = 18501 id = 6056 }
    name     = "ëÊ1åRíc"
    location = 759
    home     = 759
    mission  = { type = none target = 759 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 18501 id = 6058 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 18501 id = 6059 }
    name     = "ëÊ2åRíc"
    location = 759
    home     = 759
    mission  = { type = none target = 759 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 18501 id = 6061 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 18502 id = 6062 }
    name     = "ëÊ3êÌë‡"
    location = 759
    home     = 759
    base     = 759
    division =
    { id       = { type = 18502 id = 6064 }
      name     = "ëÊ1É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
}
