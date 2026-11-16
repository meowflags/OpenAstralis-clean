// sub_50210E0
// rva 0x050210e0  size 582  section .text  group text
// window base 0x1850210e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50210E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  int v21; // r10d
  __int64 v22; // r8
  int v23; // r11d
  unsigned int v24; // r12d
  __int64 v26; // rsi
  unsigned int v27; // edx
  char v28; // [rsp+0h] [rbp-38h] BYREF
  __int64 v29; // [rsp+8h] [rbp-30h]
  __int64 v30; // [rsp+10h] [rbp-28h]
  int v31; // [rsp+1Ch] [rbp-1Ch]
  int v32; // [rsp+20h] [rbp-18h]
  unsigned int v33; // [rsp+24h] [rbp-14h]
  unsigned int v34; // [rsp+28h] [rbp-10h]
  unsigned int v35; // [rsp+2Ch] [rbp-Ch]
  int v36; // [rsp+30h] [rbp-8h]
  int v37; // [rsp+34h] [rbp-4h]

  v37 = a5;
  v36 = a2;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else
  {
    v9 = (unsigned int)(a1 - 1);
    v10 = (unsigned int)(v9 + a2);
    if ( a6 != v7 )
    {
      v11 = *(_DWORD *)(a6 + 8);
      if ( v11 > (unsigned int)v9 )
      {
        v34 = *(_DWORD *)(a6 + 8);
        v33 = a1;
        v12 = *(unsigned __int8 *)(a6 + v9 + 12);
        v30 = a6;
        v32 = v12;
        v29 = a3;
        v31 = a1 - 1;
        v35 = v9 + a2;
        sub_501CF00(a1, a2, a3: v10, a4: v10, a5: a3, a6, a7: v28);
        v14 = v35;
        v6 = v32;
        v15 = v34;
        v16 = v31;
        v17 = v33;
        v18 = v30;
        v19 = v29;
        goto LABEL_5;
      }
      goto LABEL_35;
    }
  }
  v35 = v10;
  v11 = a3;
  LODWORD(v9) = sub_2771080();
LABEL_35:
  v26 = v11;
  v19 = a3;
  sub_2771220(a1, a2: v26, a3: (unsigned int)v9, a4: v10, a5: (unsigned int)v26);
LABEL_36:
  v16 = sub_277F280();
  v14 = v27;
  while ( 1 )
  {
LABEL_5:
    while ( 1 )
    {
      v20 = (unsigned int)(v14 - 1);
      if ( v16 > (int)v14 )
        break;
      v13 = *(unsigned __int16 *)(v19 + 2 * (int)v14 + 12);
      if ( v6 == (_DWORD)v13 )
        break;
      if ( *(int *)(v8 + 16) <= 0 )
      {
        v33 = v14;
        v16 = sub_277F280(a1: v17, a2: v15, a3: v20, a4: v14, a5: v13, a6: v18);
      }
      v14 = (unsigned int)v20;
    }
    if ( v16 > (int)v14 )
    {
      v33 = v14;
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280(a1: v17, a2: v15, a3: v20, a4: v14, a5: v13, a6: v18);
      return 0xFFFFFFFFLL;
    }
    v21 = v20 - v16;
    v22 = (unsigned int)(v17 - 2);
    if ( (int)v20 <= (int)v20 - v16 )
      break;
    v23 = *(unsigned __int16 *)(v19 + 2 * (int)v20 + 12);
    v24 = v14 - 2;
    v33 = v14;
    v14 = (unsigned int)(v17 - 3);
    if ( (unsigned int)v15 <= (unsigned int)v22 )
    {
      sub_2771220(a1: v17, a2: v15, a3: (unsigned int)v22, a4: v14, a5: (unsigned int)v15, a6: v18);
LABEL_38:
      sub_2771220(a1: v17, a2: v15, a3: (unsigned int)v14, a4: v33, a5: (unsigned int)v15);
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
      return sub_5021340();
    }
    v13 = *(unsigned __int8 *)(v18 + v22 + 12);
    if ( (_DWORD)v13 == v23 )
    {
      while ( 1 )
      {
        if ( (int)v24 <= v21 )
        {
          v22 = (unsigned int)v14;
          v20 = v24;
          goto LABEL_29;
        }
        v13 = *(unsigned __int16 *)(v19 + (int)(2 * v24--) + 12);
        if ( (unsigned int)v15 <= (unsigned int)v14 )
          goto LABEL_38;
        if ( *(unsigned __int8 *)(v18 + v14 + 12) != (_DWORD)v13 )
          break;
        v14 = (unsigned int)(v14 - 1);
      }
      if ( *(int *)(v8 + 16) <= 0 )
        goto LABEL_36;
      v14 = (unsigned int)v20;
    }
    else
    {
      if ( *(int *)(v8 + 16) <= 0 )
        v16 = sub_277F280(a1: v17, a2: v15, a3: v20, a4: v14);
      v14 = (unsigned int)v20;
    }
  }
  v33 = v14;
LABEL_29:
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v17, a2: v15, a3: v20, a4: v14, a5: v22, a6: v18);
  return (unsigned int)(v21 + 1);
}
