// sub_4F4D3E0
// rva 0x04f4d3e0  size 159  section .text  group text
// window base 0x184f4d3e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4D3E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // [rsp+0h] [rbp-8h] BYREF

  v7 = a5;
  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
    goto LABEL_8;
  }
  v8 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377151500) | ((unsigned __int16)a5 >> 1) & 0xFu;
  if ( (unsigned int)v8 >= 0x17B0 )
  {
LABEL_8:
    sub_2771220(a1, a2, a3: (unsigned int)v8, a4: v7, a5: 6064);
    goto LABEL_9;
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377155612) | (unsigned int)(v7 & 1);
  if ( (unsigned int)v9 >= 0x420 )
  {
LABEL_9:
    sub_2771220(a1, a2, a3: v9, a4: v7, a5: 1056);
    __builtin_debugtrap();
    return sub_4F4D480();
  }
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280();
  return (*(_DWORD *)(v5 + 4 * v9 + 377167756) & 0x1F) == 9;
}
