// sub_181E9BCE0
// rva 0x01e9bce0  size 435  section .text  group text
// window base 0x181e9bce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9BCE0(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rdx
  char v24; // [rsp+0h] [rbp-38h] BYREF
  __int64 v25; // [rsp+10h] [rbp-28h]
  __int64 v26; // [rsp+18h] [rbp-20h]
  __int64 v27; // [rsp+20h] [rbp-18h]
  __int64 v28; // [rsp+28h] [rbp-10h]
  __int64 v29; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v7 + 8) )
  {
    v26 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v24);
LABEL_17:
    MEMORY[0x182771080]();
    goto LABEL_18;
  }
  v26 = a3;
  v25 = v6 + 376652592;
  v29 = sub_181E98320();
  v10 = sub_181E98280(a1: v8, a2: v9, a3: v25);
  v11 = *(unsigned int *)(v6 + 376654972);
  if ( v29 > v10 )
    JUMPOUT(0x303D25D2CLL);
  v28 = v10;
  if ( (_DWORD)v11 == 0 )
    goto LABEL_17;
  v12 = *(_DWORD *)(v6 + 8 * v11) >> 3;
  v13 = *(unsigned int *)(v6 + 8 * v12 + 44);
  v14 = (unsigned int)v13 & (0x207u >> HIBYTE(*(_DWORD *)(v6 + 8 * v12 + 44)));
  if ( (unsigned __int16)*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v12 + 20) + 4 * v14 + 12) != 519 )
  {
LABEL_18:
    MEMORY[0x182770780]();
    goto LABEL_19;
  }
  v15 = *(unsigned int *)(v6 + 8 * v11 + 8);
  v16 = v6 + 8 * v11;
  if ( (_DWORD)v15 == 0 )
  {
LABEL_19:
    MEMORY[0x182771080](a1: v14, a2: v13, a3: v16, a4: v26);
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
    return sub_181E9BEA0();
  }
  v25 = v16;
  v17 = sub_181E9F560(a1: v14, a2: v13, a3: v6 + 8 * v15);
  if ( v17 == -1 )
  {
    v21 = v28;
  }
  else
  {
    v21 = v28;
    if ( v17 > v28 )
      JUMPOUT(0x303D25DB6LL);
    v17 = v28;
  }
  v22 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v22 + 48) > *(_QWORD *)(v7 + 32) )
  {
    v27 = v17;
    v22 = sub_181EAA920(a1: v19, a2: v20, a3: 40463520, a4: v18);
    v17 = v27;
    v21 = v28;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v22 + 48;
    *(_DWORD *)v22 = 40463520;
    *(_DWORD *)(v22 + 4) = 0;
    *(_QWORD *)(v22 + 8) = 0;
    *(_QWORD *)(v22 + 16) = 0;
    *(_QWORD *)(v22 + 24) = 0;
    *(_QWORD *)(v22 + 32) = 0;
    *(_QWORD *)(v22 + 40) = 0;
  }
  v27 = v17;
  v25 = v22;
  MEMORY[0x1853DFCA0](a1: v21, a2: v17, a3: v22, a4: v22, a5: -1, a6: v29);
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v25;
}
