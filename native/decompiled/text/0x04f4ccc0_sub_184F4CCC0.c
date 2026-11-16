// sub_184F4CCC0
// rva 0x04f4ccc0  size 1641  section .text  group text
// window base 0x184f4ccc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F4CCC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
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
    goto LABEL_130;
  }
  v8 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377151500) | ((unsigned __int16)a5 >> 1) & 0xFu;
  if ( (unsigned int)v8 >= 0x17B0 )
  {
LABEL_130:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v8, a4: v7, a5: 6064);
    goto LABEL_131;
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377155612) | (unsigned int)(v7 & 1);
  if ( (unsigned int)v9 >= 0x420 )
  {
LABEL_131:
    MEMORY[0x182771220](a1, a2, a3: v9, a4: v7, a5: 1056);
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
    return sub_184F4D340();
  }
  v10 = *(unsigned int *)(v5 + 4 * v9 + 377167756);
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
  if ( (int)v7 >= 8584 )
  {
    if ( (int)v7 >= 12980 )
    {
      if ( (int)v7 < 12986 )
      {
        if ( (int)v7 >= 12983 )
        {
          if ( (int)v7 >= 12985 )
          {
            v11 = 44;
          }
          else if ( (_DWORD)v7 == 12983 )
          {
            v11 = 42;
          }
          else
          {
            v11 = 43;
          }
        }
        else if ( (int)v7 >= 12982 )
        {
          v11 = 41;
        }
        else if ( (_DWORD)v7 == 12980 )
        {
          v11 = 39;
        }
        else
        {
          v11 = 40;
        }
        goto LABEL_8;
      }
      if ( (int)v7 < 12989 )
      {
        if ( (int)v7 >= 12988 )
        {
          v11 = 47;
        }
        else if ( (_DWORD)v7 == 12986 )
        {
          v11 = 45;
        }
        else
        {
          v11 = 46;
        }
        goto LABEL_8;
      }
      if ( (int)v7 <= 12991 )
      {
        if ( (int)v7 >= 12991 )
        {
          v11 = 50;
        }
        else if ( (_DWORD)v7 == 12989 )
        {
          v11 = 48;
        }
        else
        {
          v11 = 49;
        }
        goto LABEL_8;
      }
    }
    else if ( (int)v7 >= 12893 )
    {
      if ( (int)v7 >= 12977 )
      {
        if ( (int)v7 >= 12979 )
        {
          v11 = 38;
        }
        else if ( (_DWORD)v7 == 12977 )
        {
          v11 = 36;
        }
        else
        {
          v11 = 37;
        }
        goto LABEL_8;
      }
      if ( (int)v7 <= 12895 )
      {
        if ( (int)v7 >= 12895 )
        {
          v11 = 35;
        }
        else if ( (_DWORD)v7 == 12893 )
        {
          v11 = 33;
        }
        else
        {
          v11 = 34;
        }
        goto LABEL_8;
      }
    }
    else if ( (int)v7 >= 12878 )
    {
      if ( (int)v7 >= 12892 )
      {
        v11 = 32;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 12878 )
      {
        v11 = 70;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 12879 )
      {
        v11 = 80;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (int)v7 >= 12876 )
      {
        if ( (_DWORD)v7 == 12876 )
          v11 = 50;
        else
          v11 = 60;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 8584 )
      {
        v11 = 100000;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 12875 )
      {
        v11 = 40;
        goto LABEL_8;
      }
    }
LABEL_89:
    v11 = 4294967294LL;
    goto LABEL_8;
  }
  if ( (int)v7 >= 8556 )
  {
    if ( (int)v7 >= 8575 )
    {
      if ( (int)v7 < 8578 )
      {
        if ( (int)v7 >= 8577 )
          v11 = 5000;
        else
          v11 = 1000;
        goto LABEL_8;
      }
      if ( (int)v7 >= 8583 )
      {
        v11 = 50000;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 8578 )
      {
        v11 = 10000;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 8582 )
      {
        v11 = 50;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (int)v7 >= 8572 )
      {
        if ( (int)v7 >= 8574 )
        {
          v11 = 500;
        }
        else if ( (_DWORD)v7 == 8572 )
        {
          v11 = 50;
        }
        else
        {
          v11 = 100;
        }
        goto LABEL_8;
      }
      if ( (int)v7 < 8558 )
      {
        if ( (_DWORD)v7 == 8556 )
          v11 = 50;
        else
          v11 = 100;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 8558 )
      {
        v11 = 500;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 8559 )
      {
        v11 = 1000;
        goto LABEL_8;
      }
    }
    goto LABEL_89;
  }
  if ( (int)v7 >= 4984 )
  {
    if ( (int)v7 < 4987 )
    {
      if ( (int)v7 >= 4986 )
      {
        v11 = 90;
      }
      else if ( (_DWORD)v7 == 4984 )
      {
        v11 = 70;
      }
      else
      {
        v11 = 80;
      }
      goto LABEL_8;
    }
    if ( (int)v7 <= 8543 )
    {
      if ( (int)v7 >= 8543 )
      {
        v11 = 1;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 4987 )
      {
        v11 = 100;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 4988 )
      {
        v11 = 10000;
        goto LABEL_8;
      }
    }
    goto LABEL_89;
  }
  if ( (int)v7 < 4981 )
  {
    if ( (int)v7 >= 3441 )
    {
      if ( (_DWORD)v7 == 3441 )
      {
        v11 = 100;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 3442 )
      {
        v11 = 1000;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (_DWORD)v7 == 3057 )
      {
        v11 = 100;
        goto LABEL_8;
      }
      if ( (_DWORD)v7 == 3058 )
      {
        v11 = 1000;
        goto LABEL_8;
      }
    }
    goto LABEL_89;
  }
  if ( (int)v7 >= 4983 )
  {
    v11 = 60;
  }
  else if ( (_DWORD)v7 == 4981 )
  {
    v11 = 40;
  }
  else
  {
    v11 = 50;
  }
LABEL_8:
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3: v10, a4: v7, a5: v11);
  return (unsigned int)v11;
}
