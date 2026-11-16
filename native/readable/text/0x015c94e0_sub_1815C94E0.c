// sub_15C94E0
// rva 0x015c94e0  size 267  section .text  group text
// window base 0x1815c94e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C94E0(__int64 a1, __int64 a2, char *a3)
{
  __int64 v3; // r13
  char *v4; // r14
  __int64 v5; // r15
  void (__fastcall *v6)(__int64, __int64, char *, char *); // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  float v9; // xmm0_4
  __int64 result; // rax
  char *v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  char *v13; // [rsp+8h] [rbp-10h]
  float v14; // [rsp+10h] [rbp-8h]
  float v15; // [rsp+14h] [rbp-4h]

  v13 = a3;
  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v4 )
  {
    v6 = (void (__fastcall *)(__int64, __int64, char *, char *))(v3 + *(_QWORD *)&v4[8 * (*(_DWORD *)a3 >> 3) + 1720]);
    v15 = MEMORY[0x123f3c64]/* 0x123f3c64 */;
    v6(a1, a2, a3, a4: a3);
    result = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(result + 72) > *(_QWORD *)(v5 + 32) )
    {
      v14 = v9;
      result = sub_1EAA920(a1: v7, a2: v8, a3: 35856096);
      v9 = v14;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = result + 72;
      *(_DWORD *)result = 35856096;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_QWORD *)(result + 64) = 0;
    }
    v11 = v13;
    *(float *)(result + 52) = (float)(v9 * v15) / MEMORY[0x123f3c68]/* 0x123f3c68 */;
    *(_DWORD *)(result + 8) = 47039293;
    *(_DWORD *)(result + 4) = (unsigned __int64)(v11 - v4) >> 3;
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
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
  return sub_15C9600();
}
