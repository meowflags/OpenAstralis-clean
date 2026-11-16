// sub_184F3C660
// rva 0x04f3c660  size 390  section .text  group text
// window base 0x184f3c660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3C660(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  int v18; // [rsp+20h] [rbp-8h]
  int v19; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v11 + 8) )
    JUMPOUT(0x184F3C78FLL);
  v12 = *(unsigned int *)(a3 + 4);
  v13 = *(unsigned int *)(a3 + 8);
  if ( *(_BYTE *)(a3 + 12) == 0 )
    return sub_184F3C6C1(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9, a10);
  v19 = *(_DWORD *)(a3 + 8) - 1;
  v16 = a3;
  v17 = v10 + 8 * v12;
  v18 = v13;
  MEMORY[0x1850236C0](a1, a2, a3: v17, a4: v13, a5: (unsigned int)v13);
  if ( *(int *)(v11 + 16) <= 0 )
    JUMPOUT(0x184F3C785LL);
  return v16;
}
