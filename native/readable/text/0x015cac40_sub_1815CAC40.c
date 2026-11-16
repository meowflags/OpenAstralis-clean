// sub_15CAC40
// rva 0x015cac40  size 303  section .text  group text
// window base 0x1815cac40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15CAC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+Ch] [rbp-1Ch]
  __int64 v16; // [rsp+10h] [rbp-18h]
  int v17; // [rsp+18h] [rbp-10h]
  int v18; // [rsp+1Ch] [rbp-Ch]
  int v19; // [rsp+20h] [rbp-8h]
  int v20; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    v20 = a6;
    v19 = a5;
    v16 = a3;
    sub_1EB84E0();
  }
  else if ( a3 != v6 )
  {
    v8 = *(unsigned int *)(a3 + 8);
    v9 = (unsigned int)(*(_DWORD *)(a3 + 16) + a5);
    v10 = a6 - a5;
    if ( (_DWORD)v8 == 0 )
    {
LABEL_12:
      sub_2771080(a1, a2, a3, a4: v9);
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
      return sub_15CAD80();
    }
    v11 = *(_QWORD *)(v7 + 40);
    v12 = v11 + 32;
    if ( (unsigned __int64)(v11 + 32) > *(_QWORD *)(v7 + 32) )
    {
      v18 = a6 - a5;
      v17 = v9;
      v15 = v8;
      v20 = a6;
      v19 = a5;
      v16 = a3;
      v11 = sub_1EAA920(a1, a2: v12, a3: 35862696);
      v10 = v18;
      LODWORD(v9) = v17;
      v8 = v15;
      a6 = v20;
      a5 = v19;
      a3 = v16;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v12;
      *(_DWORD *)v11 = 35862696;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
    }
    *(_DWORD *)(v11 + 20) = v10;
    *(_DWORD *)(v11 + 16) = v9;
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(a3 - v6) >> 3;
    *(_DWORD *)(v11 + 8) = v8;
    *(_DWORD *)(v11 + 4) = *(_DWORD *)(v6 + 8 * v8 + 4);
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v20 = a6;
      v19 = a5;
      v16 = a3;
      sub_277F280();
    }
    return v11;
  }
  v20 = a6;
  v19 = a5;
  v16 = a3;
  sub_2771080();
  goto LABEL_12;
}
