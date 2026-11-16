// sub_501CE80
// rva 0x0501ce80  size 107  section .text  group text
// window base 0x18501ce80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501CE80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // edi
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  _QWORD v17[3]; // [rsp+0h] [rbp-28h] BYREF
  int v18; // [rsp+1Ch] [rbp-Ch]
  int v19; // [rsp+20h] [rbp-8h]
  unsigned int v20; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v17 <= *(_QWORD *)(v8 + 8) )
  {
    v18 = a5;
    v19 = a3;
    sub_1EB84E0();
  }
  else if ( a6 != v7 )
  {
    v9 = *(_DWORD *)(a6 + 8) >> 1;
    v17[2] = a6;
    v20 = v9;
    v19 = a3;
    v18 = a5;
    result = sub_6329C40(a1: v7 + 376643464, a2, a3, a4: (unsigned int)a3, a5, a6: v9);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v20);
    return result;
  }
  sub_2771080();
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
  return sub_501CF00(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16, a7);
}
