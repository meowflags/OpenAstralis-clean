// sub_182783AE0
// rva 0x02783ae0  size 180  section .text  group text
// window base 0x182783ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182783AE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  char v19; // [rsp+0h] [rbp-28h]
  char v20; // [rsp+0h] [rbp-28h]

  sub_182781160();
  *(_DWORD *)(v4 + 336) |= 2u;
  if ( (unsigned int)sub_182783100(a1: v6, a2: v7, a3, a4: v5, a5: v8, a6: v9, a7: v19) != 0 )
  {
    do
    {
      sub_182781400();
      v17 = sub_182783100(a1: v13, a2: v14, a3, a4: v12, a5: v15, a6: v16, a7: v20);
    }
    while ( v17 != 0 );
  }
  *(_DWORD *)(v4 + 336) &= ~2u;
  return MEMORY[0x18207FC60](a1: v10, a2: v11, a3: v3 + 376668448);
}
