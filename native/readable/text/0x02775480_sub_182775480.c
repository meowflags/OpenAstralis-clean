// sub_2775480
// rva 0x02775480  size 198  section .text  group text
// window base 0x182775480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2775480(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, char a7, int a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  int v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+18h] [rbp-30h]
  __int64 v23; // [rsp+20h] [rbp-28h]
  __int64 v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]
  int v26; // [rsp+3Ch] [rbp-Ch]
  int v27; // [rsp+40h] [rbp-8h]
  int v28; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v9 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2775560(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  else
  {
    if ( a1 == v8 )
    {
      v10 = v8 + 350970688;
    }
    else if ( *(_DWORD *)a1 >> 3 == 4261917 )
    {
      if ( *(_BYTE *)(a1 + 4) != 0 )
        v10 = v8 + 350970688;
      else
        v10 = v8 + 361697768;
    }
    else
    {
      v10 = v8 + 350970688;
    }
    v25 = a1;
    v28 = a2;
    v24 = v10;
    v27 = a3;
    v23 = a5;
    v22 = a6;
    v26 = a4;
    result = sub_2776580(a1: v10, a2: a2 == 66, a3, a4, a5, a6, a7: v21, a8);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v13, a2: v14, a3: v12);
  }
  return result;
}
