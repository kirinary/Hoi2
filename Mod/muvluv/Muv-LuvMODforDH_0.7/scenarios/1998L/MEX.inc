
##############################
# Country definition for MEX #
##############################

province =
{ id       = 738
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
}            # �O�A�_���n��
province = { id = 741 ic = 2 } # �v�G�u��
province =
{ id       = 745
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
}            # �������e�[
province = { id = 747 ic = 2 } # ���I��
province =
{ id         = 751
  anti_air   = 3
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
  ic         = 2
}              # �A�J�v���R
province =
{ id       = 752
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  ic       = 6
}            # ���L�V�R�V�e�B
province =
{ id            = 753
  anti_air      = 1
  air_base      = { size = 2 current_size = 2 }
  naval_base    = { size = 2 current_size = 2 }
  ic            = 2
  nuclear_power = 3
}                 # �x���N���X
province = { id = 755 ic = 1 } # �g�D�X�g���E�O�e�B�G���X

#####################
# Country main data #
#####################

country =
{ tag                 = MEX
  energy              = 1000
  metal               = 500
  rare_materials      = 200
  oil                 = 500
  supplies            = 500
  manpower            = 62
  transports          = 24
  escorts             = 4
  capital             = 752
  regular_id          = U09
  money               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 6
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  ownedprovinces      = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  controlledprovinces = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  nationalprovinces   = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  landunit =
  { id       = { type = 12501 id = 6011 }
    name     = "��1�R�c"
    location = 755
    home     = 755
    mission  = { type = none target = 755 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 12501 id = 6013 }
      name          = "��1�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 12501 id = 6014 }
    name     = "��2�R�c"
    location = 753
    home     = 753
    mission  = { type = none target = 753 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 12501 id = 6016 }
      name          = "��2�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 12501 id = 6017 }
    name     = "��3�R�c"
    location = 737
    home     = 737
    mission  = { type = none target = 737 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 12501 id = 6019 }
      name          = "��3�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 12501 id = 6020 }
    name     = "��4�R�c"
    location = 740
    home     = 740
    mission  = { type = none target = 740 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 12501 id = 6022 }
      name          = "��4�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 12501 id = 6023 }
    name     = "��5�R�c"
    location = 752
    home     = 752
    mission  = { type = none target = 752 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 12501 id = 6025 }
      name          = "��1�@�B�������t�c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
    division =
    { id            = { type = 12501 id = 6026 }
      name          = "��2�@�B�������t�c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
    division =
    { id            = { type = 12501 id = 6027 }
      name          = "��3�@�B�������t�c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 12502 id = 2467 }
    name     = "��1���"
    location = 751
    home     = 751
    base     = 751
    division =
    { id       = { type = 12502 id = 6028 }
      name     = "��1�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 12502 id = 6029 }
      name     = "��2�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 12502 id = 6030 }
      name     = "��1�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 12502 id = 6031 }
      name     = "��2�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 12502 id = 6032 }
      name     = "��1�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
}
