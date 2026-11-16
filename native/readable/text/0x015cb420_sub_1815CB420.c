// sub_15CB420
// rva 0x015cb420  size 296  section .text  group text
// window base 0x1815cb420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15CB420(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, char a7, char a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  char v12; // al
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+10h] [rbp-28h]
  __int64 v22; // [rsp+18h] [rbp-20h]
  __int64 v23; // [rsp+20h] [rbp-18h]
  int v24; // [rsp+2Ch] [rbp-Ch]
  int v25; // [rsp+30h] [rbp-8h]
  int v26; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v9 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15CB560(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v26 = a4;
      v25 = a2;
      v24 = a1;
      v23 = a6;
      v22 = a5;
      v21 = a3;
      v11 = sub_1EAA920(a1, a2, a3: 35860688);
      v12 = a8;
      a4 = v26;
      LODWORD(a2) = v25;
      LODWORD(a1) = v24;
      a6 = v23;
      a5 = v22;
      a3 = v21;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v10 + 40;
      *(_DWORD *)v10 = 35860688;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0;
      v11 = v10;
      v12 = a8;
    }
    *(_BYTE *)(v11 + 28) = MEMORY[0x123f3c6c]/* 0x123f3c6c */ & v12;
    *(_DWORD *)(v11 + 24) = a4;
    *(_DWORD *)(v11 + 20) = a2;
    *(_DWORD *)(v11 + 16) = a1;
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(a6 - v8) >> 3;
    *(_DWORD *)(v11 + 8) = (unsigned __int64)(a5 - v8) >> 3;
    *(_DWORD *)(v11 + 4) = (unsigned __int64)(a3 - v8) >> 3;
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v26 = a4;
      v25 = a2;
      v24 = a1;
      v23 = a6;
      v22 = a5;
      v21 = a3;
      sub_277F280();
    }
    return v11;
  }
}
