// sub_1592120
// rva 0x01592120  size 241  section .text  group text
// window base 0x181592120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1592120(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  __int64 v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(v8 + 376612200);
  if ( v10 == MEMORY[0x12002778]/* 0x12002778 */ )
    return sub_1815921B2(a1, a2, a3: MEMORY[0x12002778]/* 0x12002778 */, a4, a5, a6, a7, a8);
  if ( (unsigned __int64)(v10 + 128) >= 0x100 )
  {
    v12 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v12 + 16) > *(_QWORD *)(v9 + 32) )
    {
      v16 = *(_QWORD *)(v8 + 376612200);
      v12 = sub_1EAA920(a1, a2, a3: 34083616);
      v10 = v16;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v12 + 16;
      *(_DWORD *)v12 = 34083616;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
    }
    *(_QWORD *)(v12 + 8) = v10;
    goto LABEL_6;
  }
  v11 = (unsigned int)(v10 + 128);
  if ( (unsigned int)v11 >= 0x100 )
  {
LABEL_14:
    sub_2770B00();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v12 = v8 + 8LL * *(unsigned int *)(v8 + 4 * v11 + 376352092);
LABEL_6:
  v16 = v10;
  v15 = v12;
  result = sub_283E560(a1, a2, a3: v8 + 376612264, a4: v15, a5: v8 + 376612280, a6: v15);
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
