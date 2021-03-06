
##############################
# Country definition for BRA #
##############################

province =
{ id       = 826
  air_base = { size = 1 current_size = 1 }
}            # ���V�t�F
province = { id = 847 anti_air = 1 ic = 3 } # �N���`�o
province =
{ id         = 848
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
  ic         = 2
}              # �|���g�E�A���O��
province =
{ id         = 877
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}              # �x����
province =
{ id       = 880
  air_base = { size = 1 current_size = 1 }
  ic       = 2
}            # �t�H���^���[�U
province =
{ id         = 881
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
  ic         = 4
}              # �i�^�[��
province =
{ id         = 882
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
  ic         = 2
}              # �T���o�h�[��
province = { id = 883 ic = 1 } # �S�C�A�X
province =
{ id            = 885
  anti_air      = 2
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 6 current_size = 6 }
  ic            = 8
  nuclear_power = 4
}                 # ���I�f�W���l�C��
province =
{ id       = 886
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  ic       = 6
}            # �T���p�E��
province = { id = 887 anti_air = 1 } # �x���E�I���]���e

#####################
# Country main data #
#####################

country =
{ tag                 = BRA
  energy              = 5000
  metal               = 5000
  rare_materials      = 5000
  oil                 = 5000
  supplies            = 80000
  manpower            = 156
  transports          = 24
  escorts             = 6
  capital             = 885
  transports          = 50
  escorts             = 20
  money               = 350
  regular_id = U08
  nationalprovinces   = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  ownedprovinces      = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  controlledprovinces = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  policy              = { democratic = 3 political_left = 4 freedom = 3 free_market = 7 professional_army = 6 defense_lobby = 7 interventionism = 6 }
  landunit =
  { id       = { type = 3001 id = 6122 }
    name     = "��1�R�c"
    location = 877
    home     = 877
    mission  = { type = none target = 877 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 3001 id = 6124 }
      name          = "��1�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 3001 id = 6125 }
    name     = "��2�R�c"
    location = 826
    home     = 826
    mission  = { type = none target = 826 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 3001 id = 6127 }
      name          = "��2�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 3001 id = 6128 }
    name     = "��3�R�c"
    location = 882
    home     = 882
    mission  = { type = none target = 882 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 3001 id = 6130 }
      name          = "��3�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 3001 id = 6131 }
    name     = "��4�R�c"
    location = 884
    home     = 884
    mission  = { type = none target = 884 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 3001 id = 6133 }
      name          = "��4�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 3001 id = 6134 }
    name     = "��5�R�c"
    location = 886
    home     = 886
    mission  = { type = none target = 886 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 3001 id = 6136 }
      name          = "��5�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 3001 id = 6137 }
    name     = "��6�R�c"
    location = 883
    home     = 883
    mission  = { type = none target = 883 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 3001 id = 6139 }
      name          = "��6�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 3001 id = 6140 }
    name     = "��7�R�c"
    location = 885
    home     = 885
    mission  = { type = none target = 885 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 3001 id = 6142 }
      name          = "��7�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 3001 id = 6143 }
    name     = "��8�R�c"
    location = 885
    home     = 885
    mission  = { type = none target = 885 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 3001 id = 6145 }
      name          = "��1�@�B�������t�c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 3001 id = 6146 }
    name     = "��9�R�c"
    location = 885
    home     = 885
    mission  = { type = none target = 885 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 3001 id = 6148 }
      name          = "��1��͐�Ԏt�c"
      model         = 3
      brigade_model = 0
      type          = armor
      extra         = sp_artillery
      strength      = 100
      locked        = yes
    }
    division =
    { id            = { type = 3001 id = 6149 }
      name          = "��1������Ԏt�c"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 3002 id = 2377 }
    name     = "��1���"
    location = 885
    home     = 885
    base     = 885
    division =
    { id       = { type = 3002 id = 6150 }
      name     = "��1�~�T�C�����t�c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 3002 id = 6151 }
      name     = "��2�~�T�C�����t�c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 3002 id = 6152 }
      name     = "��1�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 3002 id = 6153 }
      name     = "��2�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 3002 id = 6154 }
      name     = "��1�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
}
