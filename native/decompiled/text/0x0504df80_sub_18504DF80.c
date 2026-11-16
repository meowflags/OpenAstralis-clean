// sub_18504DF80
// rva 0x0504df80  size 284  section .text  group text
// window base 0x18504df80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504DF80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 (*v9)(void); // rax
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+8h] [rbp-10h]
  _DWORD *v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = a5;
    v13 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_8;
  }
  if ( a5 != v6
    && (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a5 >> 3) + 11] & (0x57Fu >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 1407 )
  {
    goto LABEL_9;
  }
  if ( (unsigned __int16)v6[2 * v6[2 * (*a3 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a3 >> 3) + 11] & (0x16BCu >> HIBYTE(v6[2 * (*a3 >> 3) + 11])))] != 5820 )
  {
LABEL_8:
    v12 = a5;
    v13 = a3;
    MEMORY[0x182770780]();
LABEL_9:
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4: a3, a5: v6 + 10827788);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18504E0A0();
  }
  v8 = *a3 >> 3;
  v9 = (__int64 (*)(void))(v5
                         + *(_QWORD *)((char *)&v6[2 * v8 + 2]
                                     + HIWORD(v6[2 * v6[2 * v8 + 5]
                                               + 3
                                               + (v6[2 * v8 + 11] & (0x16BCu >> HIBYTE(v6[2 * v8 + 11])))])));
  v13 = a3;
  v12 = a5;
  result = v9();
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
