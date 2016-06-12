
##############################
# Country definition for NIC #
##############################

province =
{ id         = 539
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
  ic         = 3
}              # É}ÉiÉOÉA

#####################
# Country main data #
#####################

country =
{ tag                 = NIC
  energy              = 500
  metal               = 500
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  manpower            = 3
  transports          = 12
  escorts             = 2
  capital             = 539
  regular_id          = U09

  money               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 5
    freedom           = 4
    free_market       = 7
    professional_army = 4
    defense_lobby     = 8
    interventionism   = 8
  }
  ownedprovinces      = { 539 }
  controlledprovinces = { 539 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  nationalprovinces   = { 539 }
  landunit =
  { id       = { type = 14001 id = 6066 }
    name     = "ëÊ1åRíc"
    location = 539
    home     = 539
    mission  = { type = none target = 539 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 14001 id = 6068 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 14001 id = 6069 }
    name     = "ëÊ2åRíc"
    location = 539
    home     = 539
    mission  = { type = none target = 539 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 14001 id = 6071 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 14002 id = 6072 }
    name     = "ëÊ3êÌë‡"
    location = 539
    home     = 539
    base     = 539
    division =
    { id       = { type = 14002 id = 6074 }
      name     = "ëÊ1É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
}
