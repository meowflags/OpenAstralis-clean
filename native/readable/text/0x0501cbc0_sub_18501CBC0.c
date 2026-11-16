// sub_501CBC0
// rva 0x0501cbc0  size 464  section .text  group text
// window base 0x18501cbc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501CBC0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdi
  signed int i; // ebp
  int v12; // ebp
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  unsigned int *v17; // [rsp+10h] [rbp-18h]
  int v18; // [rsp+18h] [rbp-10h]
  unsigned int v19; // [rsp+1Ch] [rbp-Ch]
  unsigned int v20; // [rsp+20h] [rbp-8h]
  int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
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
    return sub_501CDA0();
  }
  v5 = a3[1];
  v6 = a3[3];
  v7 = a3[2];
  v8 = (v7 + a3[3]) >> 1;
  v9 = v3 + 8 * v5;
  if ( (int)v6 > (int)v8 )
  {
    v12 = *(unsigned __int16 *)(v9 + (int)((v7 + a3[3]) & 0xFFFFFFFE) + 12);
    if ( v12 == 10 )
    {
      i = (v7 + a3[3]) >> 1;
    }
    else if ( v12 == 13 )
    {
      i = (v7 + a3[3]) >> 1;
    }
    else
    {
      for ( i = v8 + 1; (int)v6 > i; ++i )
      {
        v13 = *(unsigned __int16 *)(v9 + 2 * i + 12);
        if ( v13 == 10 || v13 == 13 )
          goto LABEL_4;
      }
      i = a3[3];
    }
  }
  else
  {
    i = a3[3];
  }
LABEL_4:
  if ( (int)v6 <= i )
    goto LABEL_5;
  v14 = i + 1;
  if ( *(_WORD *)(v9 + 2 * i + 12) == 13 && (int)v6 > v14 && *(_WORD *)(v9 + 2 * v14 + 12) == 10 )
    v14 = i + 2;
  if ( (int)v6 <= v14 )
  {
    v6 = (unsigned int)v14;
LABEL_5:
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v20 = (v7 + a3[3]) >> 1;
      v17 = a3;
      sub_277F280(a1: v9, a2: v8, a3, a4: v6);
    }
    return v3;
  }
  a3[2] = v14;
  v15 = *(_QWORD *)(v4 + 40);
  if ( (unsigned __int64)(v15 + 24) > *(_QWORD *)(v4 + 32) )
  {
    v21 = v14;
    v20 = v8;
    v19 = v7;
    v18 = v5;
    v17 = a3;
    v15 = sub_1EAA920(a1: v9, a2: v8, a3: 43304504);
    v14 = v21;
    v7 = v19;
    LODWORD(v5) = v18;
    a3 = v17;
  }
  else
  {
    *(_QWORD *)(v4 + 40) = v15 + 24;
    *(_DWORD *)v15 = 43304504;
    *(_DWORD *)(v15 + 4) = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 16) = 0;
  }
  *(_DWORD *)(v15 + 12) = v14;
  *(_DWORD *)(v15 + 8) = v7;
  *(_DWORD *)(v15 + 4) = v5;
  if ( *(int *)(v4 + 16) <= 0 )
  {
    v17 = a3;
    sub_277F280();
  }
  return v15;
}
