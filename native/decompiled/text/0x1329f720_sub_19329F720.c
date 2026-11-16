// sub_19329F720
// rva 0x1329f720  size 285  section .text  group text
// window base 0x19329f720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_19329F720(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // edi
  int v9; // esi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v20; // [rsp+0h] [rbp-2D8h] BYREF
  _BYTE v21[4]; // [rsp+20h] [rbp-2B8h] BYREF
  __int64 v22; // [rsp+24h] [rbp-2B4h]
  __int64 v23; // [rsp+30h] [rbp-2A8h]
  __int64 v24; // [rsp+2C0h] [rbp-18h]

  sub_1932CA161(a1, a2, a3: 0, a4: v21, a5: 668);
  sub_19329F840(a1: v6, a2: v7, a3: v5, a4: v21);
  sub_19329FAA0(a1: v8, a2: v9, a3: (unsigned int)v21, a4, a5: v10, a6: v11);
  v16 = v22;
  v17 = v23;
  if ( (_DWORD)v22 == 1970169159 )
  {
    v12 = ((unsigned int)v23 >> 8) & 0xF;
    v15 = (unsigned __int64)(v23 & 0xF0 | ((unsigned int)v23 >> 8) & 0xF00) >> 4;
    if ( (_DWORD)v12 + (unsigned __int8)((unsigned int)v23 >> 20) == 6 && ((_DWORD)v15 == 87 || (_DWORD)v15 == 133) )
    {
      *(_WORD *)(a4 + 36) = 0;
      *(_WORD *)(a4 + 32) = 0;
      *(_BYTE *)(a4 + 28) = 0;
      *(_WORD *)(a4 + 39) = 0;
      *(_BYTE *)(a4 + 38) = 0;
      *(_DWORD *)(a4 + 42) = 0;
      *(_WORD *)(a4 + 51) = 0;
      *(_BYTE *)(a4 + 58) = 0;
    }
  }
  MEMORY[0x3370B0] = *(_BYTE *)(a4 + 28) != 0
                  && (v16 != 1752462657
                   || (v18 = (unsigned int)v17 >> 20,
                       (_DWORD)(v17 = ((unsigned int)v17 >> 8) & 0xF) + (unsigned __int8)v18 != 25));
  return sub_1932C8DE0(a1: v13, a2: v14, a3: v12, a4: (unsigned __int64)&v20 ^ v24, a5: v17, a6: v15);
}
