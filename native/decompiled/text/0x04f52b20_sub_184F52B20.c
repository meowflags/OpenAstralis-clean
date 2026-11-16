// sub_184F52B20
// rva 0x04f52b20  size 7590  section .text  group text
// window base 0x184f52b20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F52B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-8h] BYREF

  v7 = a5;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2, a3, a4: a5);
    goto LABEL_628;
  }
  v8 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377174548) | ((unsigned __int16)a5 >> 1) & 0xFu;
  if ( (unsigned int)v8 >= 0x1600 )
  {
LABEL_628:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v8, a4: v7, a5: 5632);
    goto LABEL_629;
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377178660) | (unsigned int)(v7 & 1);
  if ( (unsigned int)v9 >= 0x2AE )
  {
LABEL_629:
    MEMORY[0x182771220](a1, a2, a3: v9, a4: v7, a5: 686);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F548E0();
  }
  v10 = *(unsigned int *)(v5 + 4 * v9 + 377189940);
  v11 = ((_BYTE)v7 + ((unsigned __int16)(v10 & 0x3E0) >> 5)) & 0x1F;
  v12 = v10 & 0xC00;
  if ( v12 == 1024 )
    goto LABEL_8;
  if ( v12 != 2048 )
  {
    if ( v12 == 3072 )
      v11 = (unsigned int)(v11 + 10);
    else
      v11 = 0xFFFFFFFFLL;
    goto LABEL_8;
  }
  if ( (int)v7 >= 69228 )
  {
    if ( (int)v7 >= 126085 )
    {
      if ( (int)v7 >= 126224 )
      {
        if ( (int)v7 < 126241 )
        {
          if ( (int)v7 >= 126233 )
          {
            if ( (int)v7 >= 126237 )
            {
              if ( (int)v7 >= 126239 )
              {
                if ( (_DWORD)v7 == 126239 )
                  v11 = 4000;
                else
                  v11 = 5000;
              }
              else if ( (_DWORD)v7 == 126237 )
              {
                v11 = 2000;
              }
              else
              {
                v11 = 3000;
              }
            }
            else if ( (int)v7 >= 126235 )
            {
              if ( (_DWORD)v7 == 126235 )
                v11 = 900;
              else
                v11 = 1000;
            }
            else if ( (_DWORD)v7 == 126233 )
            {
              v11 = 700;
            }
            else
            {
              v11 = 800;
            }
          }
          else if ( (int)v7 >= 126229 )
          {
            if ( (int)v7 >= 126231 )
            {
              if ( (_DWORD)v7 == 126231 )
                v11 = 500;
              else
                v11 = 600;
            }
            else if ( (_DWORD)v7 == 126229 )
            {
              v11 = 300;
            }
            else
            {
              v11 = 400;
            }
          }
          else if ( (int)v7 >= 126227 )
          {
            if ( (_DWORD)v7 == 126227 )
              v11 = 100;
            else
              v11 = 200;
          }
          else if ( (int)v7 >= 126226 )
          {
            v11 = 90;
          }
          else if ( (_DWORD)v7 == 126224 )
          {
            v11 = 70;
          }
          else
          {
            v11 = 80;
          }
          goto LABEL_8;
        }
        if ( (int)v7 < 126250 )
        {
          if ( (int)v7 >= 126246 )
          {
            if ( (int)v7 >= 126248 )
            {
              if ( (_DWORD)v7 == 126248 )
                v11 = 40000;
              else
                v11 = 50000;
            }
            else if ( (_DWORD)v7 == 126246 )
            {
              v11 = 20000;
            }
            else
            {
              v11 = 30000;
            }
          }
          else if ( (int)v7 >= 126244 )
          {
            if ( (_DWORD)v7 == 126244 )
              v11 = 9000;
            else
              v11 = 10000;
          }
          else if ( (int)v7 >= 126243 )
          {
            v11 = 8000;
          }
          else if ( (_DWORD)v7 == 126241 )
          {
            v11 = 6000;
          }
          else
          {
            v11 = 7000;
          }
          goto LABEL_8;
        }
        if ( (int)v7 >= 126264 )
        {
          if ( (int)v7 < 126266 )
          {
            if ( (_DWORD)v7 == 126264 )
              v11 = 400;
            else
              v11 = 600;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 126266 )
          {
            v11 = 2000;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 126267 )
          {
            v11 = 10000;
            goto LABEL_8;
          }
        }
        else
        {
          if ( (int)v7 < 126252 )
          {
            if ( (_DWORD)v7 == 126250 )
              v11 = 60000;
            else
              v11 = 70000;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 126252 )
          {
            v11 = 80000;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 126253 )
          {
            v11 = 90000;
            goto LABEL_8;
          }
        }
      }
      else
      {
        if ( (int)v7 < 126103 )
        {
          if ( (int)v7 >= 126094 )
          {
            if ( (int)v7 >= 126099 )
            {
              if ( (int)v7 >= 126101 )
              {
                if ( (_DWORD)v7 == 126101 )
                  v11 = 10000;
                else
                  v11 = 20000;
              }
              else if ( (_DWORD)v7 == 126099 )
              {
                v11 = 8000;
              }
              else
              {
                v11 = 9000;
              }
            }
            else if ( (int)v7 >= 126097 )
            {
              if ( (_DWORD)v7 == 126097 )
                v11 = 6000;
              else
                v11 = 7000;
            }
            else if ( (int)v7 >= 126096 )
            {
              v11 = 5000;
            }
            else if ( (_DWORD)v7 == 126094 )
            {
              v11 = 3000;
            }
            else
            {
              v11 = 4000;
            }
          }
          else if ( (int)v7 >= 126090 )
          {
            if ( (int)v7 >= 126092 )
            {
              if ( (_DWORD)v7 == 126092 )
                v11 = 1000;
              else
                v11 = 2000;
            }
            else if ( (_DWORD)v7 == 126090 )
            {
              v11 = 800;
            }
            else
            {
              v11 = 900;
            }
          }
          else if ( (int)v7 >= 126088 )
          {
            if ( (_DWORD)v7 == 126088 )
              v11 = 600;
            else
              v11 = 700;
          }
          else if ( (int)v7 >= 126087 )
          {
            v11 = 500;
          }
          else if ( (_DWORD)v7 == 126085 )
          {
            v11 = 300;
          }
          else
          {
            v11 = 400;
          }
          goto LABEL_8;
        }
        if ( (int)v7 < 126112 )
        {
          if ( (int)v7 >= 126108 )
          {
            if ( (int)v7 >= 126110 )
            {
              if ( (_DWORD)v7 == 126110 )
                v11 = 100000;
              else
                v11 = 200000;
            }
            else if ( (_DWORD)v7 == 126108 )
            {
              v11 = 80000;
            }
            else
            {
              v11 = 90000;
            }
          }
          else if ( (int)v7 >= 126106 )
          {
            if ( (_DWORD)v7 == 126106 )
              v11 = 60000;
            else
              v11 = 70000;
          }
          else if ( (int)v7 >= 126105 )
          {
            v11 = 50000;
          }
          else if ( (_DWORD)v7 == 126103 )
          {
            v11 = 30000;
          }
          else
          {
            v11 = 40000;
          }
          goto LABEL_8;
        }
        if ( (int)v7 >= 126132 )
        {
          if ( (int)v7 >= 126222 )
          {
            if ( (_DWORD)v7 == 126222 )
              v11 = 50;
            else
              v11 = 60;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 126132 )
          {
            v11 = 100000;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 126221 )
          {
            v11 = 40;
            goto LABEL_8;
          }
        }
        else
        {
          if ( (int)v7 < 126114 )
          {
            if ( (_DWORD)v7 == 126112 )
              v11 = 100000;
            else
              v11 = 10000000;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 126114 )
          {
            v11 = 20000000;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 126131 )
          {
            v11 = 10000;
            goto LABEL_8;
          }
        }
      }
    }
    else if ( (int)v7 >= 71918 )
    {
      if ( (int)v7 >= 93021 )
      {
        if ( (int)v7 >= 126077 )
        {
          if ( (int)v7 >= 126081 )
          {
            if ( (int)v7 >= 126083 )
            {
              if ( (_DWORD)v7 == 126083 )
                v11 = 100;
              else
                v11 = 200;
            }
            else if ( (_DWORD)v7 == 126081 )
            {
              v11 = 80;
            }
            else
            {
              v11 = 90;
            }
          }
          else if ( (int)v7 >= 126079 )
          {
            if ( (_DWORD)v7 == 126079 )
              v11 = 60;
            else
              v11 = 70;
          }
          else if ( (_DWORD)v7 == 126077 )
          {
            v11 = 40;
          }
          else
          {
            v11 = 50;
          }
          goto LABEL_8;
        }
        if ( (int)v7 >= 119662 )
        {
          if ( (int)v7 < 119664 )
          {
            if ( (_DWORD)v7 == 119662 )
              v11 = 60;
            else
              v11 = 70;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 119664 )
          {
            v11 = 80;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 119665 )
          {
            v11 = 90;
            goto LABEL_8;
          }
        }
        else
        {
          if ( (int)v7 >= 119660 )
          {
            if ( (_DWORD)v7 == 119660 )
              v11 = 40;
            else
              v11 = 50;
            goto LABEL_8;
          }
          if ( (int)v7 <= 93023 )
          {
            if ( (int)v7 >= 93023 )
            {
              v11 = 100000000;
            }
            else if ( (_DWORD)v7 == 93021 )
            {
              v11 = 10000;
            }
            else
            {
              v11 = 1000000;
            }
            goto LABEL_8;
          }
        }
      }
      else if ( (int)v7 >= 72810 )
      {
        if ( (int)v7 >= 74803 )
        {
          if ( (int)v7 >= 74856 )
          {
            if ( (_DWORD)v7 == 74856 )
            {
              v11 = 50;
              goto LABEL_8;
            }
            if ( (_DWORD)v7 == 93020 )
            {
              v11 = 100;
              goto LABEL_8;
            }
          }
          else
          {
            if ( (_DWORD)v7 == 74803 )
            {
              v11 = 432000;
              goto LABEL_8;
            }
            if ( (_DWORD)v7 == 74855 )
            {
              v11 = 40;
              goto LABEL_8;
            }
          }
        }
        else
        {
          if ( (int)v7 < 72812 )
          {
            if ( (_DWORD)v7 == 72810 )
              v11 = 80;
            else
              v11 = 90;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 72812 )
          {
            v11 = 100;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 74802 )
          {
            v11 = 216000;
            goto LABEL_8;
          }
        }
      }
      else
      {
        if ( (int)v7 >= 72806 )
        {
          if ( (int)v7 >= 72808 )
          {
            if ( (_DWORD)v7 == 72808 )
              v11 = 60;
            else
              v11 = 70;
          }
          else if ( (_DWORD)v7 == 72806 )
          {
            v11 = 40;
          }
          else
          {
            v11 = 50;
          }
          goto LABEL_8;
        }
        if ( (int)v7 < 71921 )
        {
          if ( (int)v7 >= 71920 )
          {
            v11 = 70;
          }
          else if ( (_DWORD)v7 == 71918 )
          {
            v11 = 50;
          }
          else
          {
            v11 = 60;
          }
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 71921 )
        {
          v11 = 80;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 71922 )
        {
          v11 = 90;
          goto LABEL_8;
        }
      }
    }
    else if ( (int)v7 >= 69726 )
    {
      if ( (int)v7 >= 70126 )
      {
        if ( (int)v7 < 70130 )
        {
          if ( (int)v7 >= 70128 )
          {
            if ( (_DWORD)v7 == 70128 )
              v11 = 70;
            else
              v11 = 80;
          }
          else if ( (_DWORD)v7 == 70126 )
          {
            v11 = 50;
          }
          else
          {
            v11 = 60;
          }
          goto LABEL_8;
        }
        if ( (int)v7 < 70132 )
        {
          if ( (_DWORD)v7 == 70130 )
            v11 = 90;
          else
            v11 = 100;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 70132 )
        {
          v11 = 1000;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 71917 )
        {
          v11 = 40;
          goto LABEL_8;
        }
      }
      else
      {
        if ( (int)v7 < 69731 )
        {
          if ( (int)v7 >= 69729 )
          {
            if ( (_DWORD)v7 == 69729 )
              v11 = 70;
            else
              v11 = 80;
          }
          else if ( (int)v7 >= 69728 )
          {
            v11 = 60;
          }
          else if ( (_DWORD)v7 == 69726 )
          {
            v11 = 40;
          }
          else
          {
            v11 = 50;
          }
          goto LABEL_8;
        }
        if ( (int)v7 < 69733 )
        {
          if ( (_DWORD)v7 == 69731 )
            v11 = 90;
          else
            v11 = 100;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 69733 )
        {
          v11 = 1000;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 70125 )
        {
          v11 = 40;
          goto LABEL_8;
        }
      }
    }
    else
    {
      if ( (int)v7 < 69237 )
      {
        if ( (int)v7 >= 69233 )
        {
          if ( (int)v7 >= 69235 )
          {
            if ( (_DWORD)v7 == 69235 )
              v11 = 200;
            else
              v11 = 300;
          }
          else if ( (_DWORD)v7 == 69233 )
          {
            v11 = 90;
          }
          else
          {
            v11 = 100;
          }
        }
        else if ( (int)v7 >= 69231 )
        {
          if ( (_DWORD)v7 == 69231 )
            v11 = 70;
          else
            v11 = 80;
        }
        else if ( (int)v7 >= 69230 )
        {
          v11 = 60;
        }
        else if ( (_DWORD)v7 == 69228 )
        {
          v11 = 40;
        }
        else
        {
          v11 = 50;
        }
        goto LABEL_8;
      }
      if ( (int)v7 < 69242 )
      {
        if ( (int)v7 >= 69240 )
        {
          if ( (_DWORD)v7 == 69240 )
            v11 = 700;
          else
            v11 = 800;
        }
        else if ( (int)v7 >= 69239 )
        {
          v11 = 600;
        }
        else if ( (_DWORD)v7 == 69237 )
        {
          v11 = 400;
        }
        else
        {
          v11 = 500;
        }
        goto LABEL_8;
      }
      if ( (int)v7 >= 69460 )
      {
        if ( (_DWORD)v7 == 69460 )
        {
          v11 = 100;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 69579 )
        {
          v11 = 100;
          goto LABEL_8;
        }
      }
      else
      {
        if ( (_DWORD)v7 == 69242 )
        {
          v11 = 900;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 69413 )
        {
          v11 = 100;
          goto LABEL_8;
        }
      }
    }
LABEL_445:
    v11 = 4294967294LL;
    goto LABEL_8;
  }
  if ( (int)v7 >= 66293 )
  {
    if ( (int)v7 >= 68064 )
    {
      if ( (int)v7 < 68081 )
      {
        if ( (int)v7 >= 68073 )
        {
          if ( (int)v7 >= 68077 )
          {
            if ( (int)v7 >= 68079 )
            {
              if ( (_DWORD)v7 == 68079 )
                v11 = 300000;
              else
                v11 = 400000;
            }
            else if ( (_DWORD)v7 == 68077 )
            {
              v11 = 100000;
            }
            else
            {
              v11 = 200000;
            }
          }
          else if ( (int)v7 >= 68075 )
          {
            if ( (_DWORD)v7 == 68075 )
              v11 = 80000;
            else
              v11 = 90000;
          }
          else if ( (_DWORD)v7 == 68073 )
          {
            v11 = 60000;
          }
          else
          {
            v11 = 70000;
          }
        }
        else if ( (int)v7 >= 68069 )
        {
          if ( (int)v7 >= 68071 )
          {
            if ( (_DWORD)v7 == 68071 )
              v11 = 40000;
            else
              v11 = 50000;
          }
          else if ( (_DWORD)v7 == 68069 )
          {
            v11 = 20000;
          }
          else
          {
            v11 = 30000;
          }
        }
        else if ( (int)v7 >= 68067 )
        {
          if ( (_DWORD)v7 == 68067 )
            v11 = 9000;
          else
            v11 = 10000;
        }
        else if ( (int)v7 >= 68066 )
        {
          v11 = 8000;
        }
        else if ( (_DWORD)v7 == 68064 )
        {
          v11 = 6000;
        }
        else
        {
          v11 = 7000;
        }
        goto LABEL_8;
      }
      if ( (int)v7 >= 68446 )
      {
        if ( (int)v7 >= 68527 )
        {
          if ( (int)v7 >= 68862 )
          {
            if ( (_DWORD)v7 == 68862 )
            {
              v11 = 100;
              goto LABEL_8;
            }
            if ( (_DWORD)v7 == 68863 )
            {
              v11 = 1000;
              goto LABEL_8;
            }
          }
          else
          {
            if ( (_DWORD)v7 == 68527 )
            {
              v11 = 100;
              goto LABEL_8;
            }
            if ( (_DWORD)v7 == 68861 )
            {
              v11 = 50;
              goto LABEL_8;
            }
          }
        }
        else if ( (int)v7 >= 68478 )
        {
          if ( (_DWORD)v7 == 68478 )
          {
            v11 = 100;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 68479 )
          {
            v11 = 1000;
            goto LABEL_8;
          }
        }
        else
        {
          if ( (_DWORD)v7 == 68446 )
          {
            v11 = 100;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 68447 )
          {
            v11 = 1000;
            goto LABEL_8;
          }
        }
      }
      else if ( (int)v7 >= 68166 )
      {
        if ( (int)v7 >= 68222 )
        {
          if ( (_DWORD)v7 == 68222 )
          {
            v11 = 50;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 68335 )
          {
            v11 = 100;
            goto LABEL_8;
          }
        }
        else
        {
          if ( (_DWORD)v7 == 68166 )
          {
            v11 = 100;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 68167 )
          {
            v11 = 1000;
            goto LABEL_8;
          }
        }
      }
      else
      {
        if ( (int)v7 < 68084 )
        {
          if ( (int)v7 >= 68083 )
          {
            v11 = 700000;
          }
          else if ( (_DWORD)v7 == 68081 )
          {
            v11 = 500000;
          }
          else
          {
            v11 = 600000;
          }
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 68084 )
        {
          v11 = 800000;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 68085 )
        {
          v11 = 900000;
          goto LABEL_8;
        }
      }
    }
    else if ( (int)v7 >= 68045 )
    {
      if ( (int)v7 >= 68056 )
      {
        if ( (int)v7 >= 68060 )
        {
          if ( (int)v7 >= 68062 )
          {
            if ( (_DWORD)v7 == 68062 )
              v11 = 4000;
            else
              v11 = 5000;
          }
          else if ( (_DWORD)v7 == 68060 )
          {
            v11 = 2000;
          }
          else
          {
            v11 = 3000;
          }
        }
        else if ( (int)v7 >= 68058 )
        {
          if ( (_DWORD)v7 == 68058 )
            v11 = 900;
          else
            v11 = 1000;
        }
        else if ( (_DWORD)v7 == 68056 )
        {
          v11 = 700;
        }
        else
        {
          v11 = 800;
        }
        goto LABEL_8;
      }
      if ( (int)v7 >= 68052 )
      {
        if ( (int)v7 >= 68054 )
        {
          if ( (_DWORD)v7 == 68054 )
            v11 = 500;
          else
            v11 = 600;
        }
        else if ( (_DWORD)v7 == 68052 )
        {
          v11 = 300;
        }
        else
        {
          v11 = 400;
        }
        goto LABEL_8;
      }
      if ( (int)v7 >= 68050 )
      {
        if ( (_DWORD)v7 == 68050 )
          v11 = 100;
        else
          v11 = 200;
        goto LABEL_8;
      }
      if ( (int)v7 <= 68047 )
      {
        if ( (int)v7 >= 68047 )
        {
          v11 = 70;
        }
        else if ( (_DWORD)v7 == 68045 )
        {
          v11 = 50;
        }
        else
        {
          v11 = 60;
        }
        goto LABEL_8;
      }
    }
    else if ( (int)v7 >= 66378 )
    {
      if ( (int)v7 >= 67759 )
      {
        if ( (int)v7 >= 67865 )
        {
          if ( (_DWORD)v7 == 67865 )
          {
            v11 = 100;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 68044 )
          {
            v11 = 40;
            goto LABEL_8;
          }
        }
        else
        {
          if ( (_DWORD)v7 == 67759 )
          {
            v11 = 100;
            goto LABEL_8;
          }
          if ( (_DWORD)v7 == 67839 )
          {
            v11 = 100;
            goto LABEL_8;
          }
        }
      }
      else if ( (int)v7 >= 67678 )
      {
        if ( (_DWORD)v7 == 67678 )
        {
          v11 = 1000;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 67679 )
        {
          v11 = 10000;
          goto LABEL_8;
        }
      }
      else
      {
        if ( (int)v7 >= 67677 )
        {
          v11 = 100;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 66378 )
        {
          v11 = 900;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 66517 )
        {
          v11 = 100;
          goto LABEL_8;
        }
      }
    }
    else
    {
      if ( (int)v7 < 66298 )
      {
        if ( (int)v7 >= 66296 )
        {
          if ( (_DWORD)v7 == 66296 )
            v11 = 600;
          else
            v11 = 700;
        }
        else if ( (int)v7 >= 66295 )
        {
          v11 = 500;
        }
        else if ( (_DWORD)v7 == 66293 )
        {
          v11 = 300;
        }
        else
        {
          v11 = 400;
        }
        goto LABEL_8;
      }
      if ( (int)v7 >= 66339 )
      {
        if ( (_DWORD)v7 == 66339 )
        {
          v11 = 50;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 66369 )
        {
          v11 = 90;
          goto LABEL_8;
        }
      }
      else
      {
        if ( (_DWORD)v7 == 66298 )
        {
          v11 = 800;
          goto LABEL_8;
        }
        if ( (_DWORD)v7 == 66299 )
        {
          v11 = 900;
          goto LABEL_8;
        }
      }
    }
    goto LABEL_445;
  }
  if ( (int)v7 >= 65863 )
  {
    if ( (int)v7 >= 65899 )
    {
      if ( (int)v7 >= 66285 )
      {
        if ( (int)v7 >= 66289 )
        {
          if ( (int)v7 >= 66291 )
          {
            if ( (_DWORD)v7 == 66291 )
              v11 = 100;
            else
              v11 = 200;
          }
          else if ( (_DWORD)v7 == 66289 )
          {
            v11 = 80;
          }
          else
          {
            v11 = 90;
          }
        }
        else if ( (int)v7 >= 66287 )
        {
          if ( (_DWORD)v7 == 66287 )
            v11 = 60;
          else
            v11 = 70;
        }
        else if ( (_DWORD)v7 == 66285 )
        {
          v11 = 40;
        }
        else
        {
          v11 = 50;
        }
        goto LABEL_8;
      }
      if ( (int)v7 < 65904 )
      {
        if ( (int)v7 >= 65902 )
        {
          v11 = 500;
        }
        else if ( (int)v7 >= 65901 )
        {
          v11 = 500;
        }
        else if ( (_DWORD)v7 == 65899 )
        {
          v11 = 300;
        }
        else
        {
          v11 = 500;
        }
        goto LABEL_8;
      }
      if ( (int)v7 < 65906 )
      {
        if ( (_DWORD)v7 == 65904 )
          v11 = 500;
        else
          v11 = 1000;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65906 )
      {
        v11 = 5000;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65908 )
      {
        v11 = 50;
        goto LABEL_8;
      }
    }
    else if ( (int)v7 >= 65876 )
    {
      if ( (int)v7 >= 65895 )
      {
        if ( (int)v7 >= 65897 )
        {
          if ( (_DWORD)v7 == 65897 )
            v11 = 50;
          else
            v11 = 100;
        }
        else
        {
          v11 = 50;
        }
        goto LABEL_8;
      }
      if ( (int)v7 < 65878 )
      {
        if ( (_DWORD)v7 == 65876 )
          v11 = 1000;
        else
          v11 = 10000;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65878 )
      {
        v11 = 50000;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65894 )
      {
        v11 = 50;
        goto LABEL_8;
      }
    }
    else if ( (int)v7 >= 65870 )
    {
      if ( (int)v7 >= 65874 )
      {
        if ( (_DWORD)v7 == 65874 )
          v11 = 100;
        else
          v11 = 500;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65870 )
      {
        v11 = 5000;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65873 )
      {
        v11 = 50;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (int)v7 >= 65868 )
      {
        if ( (_DWORD)v7 == 65868 )
          v11 = 500;
        else
          v11 = 1000;
        goto LABEL_8;
      }
      if ( (int)v7 >= 65867 )
      {
        v11 = 100;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65863 )
      {
        v11 = 50000;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65866 )
      {
        v11 = 50;
        goto LABEL_8;
      }
    }
    goto LABEL_445;
  }
  if ( (int)v7 >= 65830 )
  {
    if ( (int)v7 < 65839 )
    {
      if ( (int)v7 >= 65835 )
      {
        if ( (int)v7 >= 65837 )
        {
          if ( (_DWORD)v7 == 65837 )
            v11 = 30000;
          else
            v11 = 40000;
        }
        else if ( (_DWORD)v7 == 65835 )
        {
          v11 = 10000;
        }
        else
        {
          v11 = 20000;
        }
      }
      else if ( (int)v7 >= 65833 )
      {
        if ( (_DWORD)v7 == 65833 )
          v11 = 8000;
        else
          v11 = 9000;
      }
      else if ( (int)v7 >= 65832 )
      {
        v11 = 7000;
      }
      else if ( (_DWORD)v7 == 65830 )
      {
        v11 = 5000;
      }
      else
      {
        v11 = 6000;
      }
      goto LABEL_8;
    }
    if ( (int)v7 < 65843 )
    {
      if ( (int)v7 >= 65841 )
      {
        if ( (_DWORD)v7 == 65841 )
          v11 = 70000;
        else
          v11 = 80000;
      }
      else if ( (_DWORD)v7 == 65839 )
      {
        v11 = 50000;
      }
      else
      {
        v11 = 60000;
      }
      goto LABEL_8;
    }
    if ( (int)v7 >= 65861 )
    {
      if ( (_DWORD)v7 == 65861 )
        v11 = 500;
      else
        v11 = 5000;
      goto LABEL_8;
    }
    if ( (_DWORD)v7 == 65843 )
    {
      v11 = 90000;
      goto LABEL_8;
    }
    if ( (_DWORD)v7 == 65860 )
    {
      v11 = 50;
      goto LABEL_8;
    }
    goto LABEL_445;
  }
  if ( (int)v7 >= 65821 )
  {
    if ( (int)v7 >= 65826 )
    {
      if ( (int)v7 >= 65829 )
      {
        v11 = 4000;
      }
      else if ( (int)v7 >= 65828 )
      {
        v11 = 3000;
      }
      else if ( (_DWORD)v7 == 65826 )
      {
        v11 = 1000;
      }
      else
      {
        v11 = 2000;
      }
    }
    else if ( (int)v7 >= 65824 )
    {
      if ( (_DWORD)v7 == 65824 )
        v11 = 800;
      else
        v11 = 900;
    }
    else if ( (int)v7 >= 65823 )
    {
      v11 = 700;
    }
    else if ( (_DWORD)v7 == 65821 )
    {
      v11 = 500;
    }
    else
    {
      v11 = 600;
    }
  }
  else if ( (int)v7 >= 65816 )
  {
    if ( (int)v7 >= 65819 )
    {
      if ( (_DWORD)v7 == 65819 )
        v11 = 300;
      else
        v11 = 400;
    }
    else if ( (int)v7 >= 65818 )
    {
      v11 = 200;
    }
    else if ( (_DWORD)v7 == 65816 )
    {
      v11 = 90;
    }
    else
    {
      v11 = 100;
    }
  }
  else
  {
    if ( (int)v7 < 65814 )
    {
      if ( (int)v7 >= 65813 )
      {
        v11 = 60;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65811 )
      {
        v11 = 40;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 65812 )
      {
        v11 = 50;
        goto LABEL_8;
      }
      goto LABEL_445;
    }
    if ( (_DWORD)v7 == 65814 )
      v11 = 70;
    else
      v11 = 80;
  }
LABEL_8:
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3: v10, a4: v7, a5: v11);
  return (unsigned int)v11;
}
