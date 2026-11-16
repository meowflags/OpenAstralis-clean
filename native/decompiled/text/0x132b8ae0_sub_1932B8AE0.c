// sub_1932B8AE0
// rva 0x132b8ae0  size 233  section .text  group text
// window base 0x1932b8ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B8AE0(__int64 a1, _DWORD a2, _DWORD a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r8d
  _QWORD v17[5]; // [rsp+0h] [rbp-258h] BYREF
  int v18; // [rsp+28h] [rbp-230h]
  __int64 v19; // [rsp+30h] [rbp-228h]
  __int16 v20; // [rsp+3Eh] [rbp-21Ah]
  _WORD v21[256]; // [rsp+40h] [rbp-218h] BYREF
  __int64 v22; // [rsp+240h] [rbp-18h]

  v5 = MEMORY[0x79758](a1);
  v10 = 0;
  if ( v5 != 0 )
  {
    v19 = 0;
    v18 = 256;
    v17[4] = v21;
    v11 = MEMORY[0x793A0](a1: 0, a2: v7, a3: 0, a4: 4608, a5: v5, a6: 0);
    if ( v11 > 3 )
    {
      if ( v21[v11 - 1] != 10 )
        JUMPOUT(0x326512B54LL);
      v15 = v11 - 1;
      if ( *(&v20 + v11 - 1) == 13 )
        JUMPOUT(0x326512B65LL);
      if ( *(&v20 + v11 - 1) == 46 )
        JUMPOUT(0x326512B76LL);
      if ( (unsigned __int64)(2LL * v15) >= 0x200 )
      {
        sub_1932C925C(a1: v13, a2: v14, a3: v12);
        JUMPOUT(0x1932B8BC8LL);
      }
      v21[v15] = v13;
    }
    (*(void (__fastcall **)(__int64, __int64, _WORD *, __int64))(*(_QWORD *)a4 + 1304LL))(a1: v13, a2: v14, a3: v21, a4);
  }
  return sub_1932C8DE0(a1: v10, a2: v7, a3: v6, a4: (unsigned __int64)v17 ^ v22, a5: v8, a6: v9);
}
