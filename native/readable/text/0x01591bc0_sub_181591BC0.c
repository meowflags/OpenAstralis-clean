// sub_1591BC0
// rva 0x01591bc0  size 1353  section .text  group text
// window base 0x181591bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1591BC0(__int64 a1, __int64 a2, __int64 (*a3)(void), __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 (*v10)(void); // rdx
  __int64 v11; // rax
  char v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 (*v14)(void); // [rsp+30h] [rbp-28h]
  __int64 (**v15)(void); // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]
  unsigned int v17; // [rsp+4Ch] [rbp-Ch]
  __int64 (*v18)(void); // [rsp+50h] [rbp-8h]

  v18 = a3;
  v17 = *(char *)a3;
  v16 = a5;
  if ( (unsigned int)MEMORY[0x120016e0]/* 0x120016e0 */(a1, a2, a3, a4: v17) == 0 )
    return 0;
  v15 = (__int64 (**)(void))&v12;
  v14 = MEMORY[0x12001a78]/* 0x12001a78 */;
  *(_DWORD *)MEMORY[0x12001a78]/* 0x12001a78 */() = 0;
  v13 = MEMORY[0x12001b28]/* 0x12001b28 */(a1: v5, a2: v6, a3: v15, a4: v18, a5: 10);
  if ( *(_DWORD *)v14() != 0 )
    return 0;
  v10 = *v15;
  if ( *v15 == v18 )
    return 0;
  v14 = *v15;
  if ( (unsigned __int64)MEMORY[0x12001378]/* 0x12001378 */(a1: v7, a2: v8, a3: v10, a4: v14) >= 2 )
    return 0;
  v11 = (unsigned int)*(char *)v14;
  if ( (unsigned int)v11 <= 0x74 )
    __asm { jmp     rdx; switch jump }
  return 0;
}
