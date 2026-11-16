// sub_181E617E0
// rva 0x01e617e0  size 556  section .text  group text
// window base 0x181e617e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E617E0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 j; // rbx
  __int64 v4; // r13
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  char *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 i; // rax
  __int64 result; // rax
  _DWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  _DWORD *v19; // rbp
  char v20; // si
  char *v21; // rbx
  __int64 v22; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v23; // [rsp+10h] [rbp-18h]
  __int64 v24; // [rsp+18h] [rbp-10h]
  unsigned int v25; // [rsp+24h] [rbp-4h]

  v23 = a3;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v5 )
  {
    v7 = *a3 >> 3;
    LODWORD(j) = v5[2 * v7 + 11];
    v8 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *))(v4
                                                                      + *(_QWORD *)((char *)&v5[2 * v7 + 20]
                                                                                  + HIWORD(v5[2 * v5[2 * v7 + 5]
                                                                                            + 3
                                                                                            + ((unsigned int)j
                                                                                             & (0x749u >> SBYTE3(j)))]))))(
           a1,
           a2: (unsigned int)j & (0x749u >> SBYTE3(j)),
           a3,
           a4: a3);
    v11 = (unsigned int)v8;
    if ( (_DWORD)v8 == -1 )
    {
      if ( *(int *)(v6 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return (__int64)v5;
    }
    if ( (int)v8 < 0 )
      goto LABEL_36;
    v12 = *(_QWORD **)(v6 + 40);
    v13 = ((unsigned int)v8 + 19LL) & 0x1FFFFFFF8LL;
    if ( v13 >= 0x20000 || (v10 = (char *)v12 + v13, (unsigned __int64)v12 + v13 > *(_QWORD *)(v6 + 32)) )
    {
      v24 = v8;
      v25 = v8;
      result = MEMORY[0x181EAA840](a1: v9, a2: v10, a3: 34082368, a4: (unsigned int)v8, a5: (unsigned int)v8);
      v11 = v25;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v10;
      *v12 = 34082368;
      v12[1] = (unsigned int)v8;
      if ( v13 - 16 >= 0x800 )
      {
        v25 = v8;
        memset(v12 + 2, 0, v13 - 16);
        v9 = (unsigned __int64)v12 + v13;
        v11 = v25;
      }
      else
      {
        for ( i = 16; v13 > i; i += 8LL )
          v12[i / 8] = 0;
      }
      result = (__int64)v12;
    }
    if ( (int)v11 >= 1 )
    {
      v16 = v23;
      v17 = (unsigned int)v23[1];
      v18 = *((_QWORD *)v23 + 1);
      v19 = &v5[2 * v17];
      if ( (_DWORD)v17 != 0 )
        v20 = *((_BYTE *)v19 + v18 + 12);
      else
        v20 = *(_BYTE *)(v18 + 12);
      v21 = (char *)(v18 + 1);
      *((_QWORD *)v23 + 1) = v21;
      *(_BYTE *)(result + 12) = v20;
      v10 = v21;
      for ( j = 1; (int)v11 > (int)j; j = (unsigned int)(j + 1) )
      {
        if ( (_DWORD)v17 != 0 )
          v9 = (unsigned int)v10[(_QWORD)v19 + 12];
        else
          v9 = (unsigned int)v10[12];
        *((_QWORD *)v16 + 1) = ++v10;
        if ( (unsigned int)v11 <= (unsigned int)j )
          goto LABEL_37;
        *(_BYTE *)(result + j + 12) = v9;
      }
    }
    if ( *(int *)(v6 + 16) <= 0 )
    {
      v25 = v11;
      return MEMORY[0x18277F280](a1: v9, a2: v10);
    }
    return result;
  }
  MEMORY[0x182771080]();
LABEL_36:
  v25 = v11;
  MEMORY[0x182770E80](a1: v9, a2: v10, a3: (unsigned int)v11);
LABEL_37:
  MEMORY[0x182771220](a1: v9, a2: v10, a3: (unsigned int)j, a4: v11, a5: (unsigned int)v11);
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
  return sub_181E61A20();
}
