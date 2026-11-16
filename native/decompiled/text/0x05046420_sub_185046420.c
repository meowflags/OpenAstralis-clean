// sub_185046420
// rva 0x05046420  size 326  section .text  group text
// window base 0x185046420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185046420(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+18h] [rbp-20h]
  _DWORD *v20; // [rsp+20h] [rbp-18h]
  _DWORD *v21; // [rsp+28h] [rbp-10h]
  _DWORD *v22; // [rsp+30h] [rbp-8h]

  v22 = a3;
  v21 = a5;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_16:
    v14 = MEMORY[0x18276BEE0]();
    goto LABEL_14;
  }
  v8 = *(unsigned int *)(v7 + 72);
  if ( (_DWORD)v8 != 0 )
    goto LABEL_4;
  do
  {
    MEMORY[0x182771080]();
LABEL_4:
    v9 = (unsigned int)v6[2 * v8 + 18];
    if ( (_DWORD)v9 != 0 )
      v10 = &v6[2 * v9];
    else
      v10 = &v6[2 * v8];
  }
  while ( v10 == v6 );
  v20 = &v6[2 * v10[6]];
  if ( a5 == v6 )
    goto LABEL_16;
  if ( (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a5 >> 3) + 11] & (0x56Eu >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] == 1390 )
  {
    v11 = *a5 >> 3;
    v12 = v6[2 * v11 + 11] & (0x56Eu >> HIBYTE(v6[2 * v11 + 11]));
    ((void (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                     + *(_QWORD *)((char *)&v6[2 * v11]
                                                                 + HIWORD(v6[2 * (unsigned int)v6[2 * v11 + 5] + 3 + v12]))))(
      a1,
      a2: v12,
      a3: a5);
    MEMORY[0x186362180]();
    result = (__int64)v6;
    goto LABEL_10;
  }
  v14 = MEMORY[0x18276B120]();
LABEL_14:
  v19 = v14;
  sub_18502EDE0(a1: v16, a2: v17, a3: v22, a4: v15, a5: v14);
  MEMORY[0x186362180]();
  result = v19;
LABEL_10:
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
