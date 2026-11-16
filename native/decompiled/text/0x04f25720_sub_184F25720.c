// sub_184F25720
// rva 0x04f25720  size 128  section .text  group text
// window base 0x184f25720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F25720(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, float a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+8h] [rbp-10h]
  float v13; // [rsp+14h] [rbp-4h]

  v12 = a3;
  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    return sub_184F257A0();
  }
  else
  {
    v8 = v6 + 8LL * (unsigned int)a3[4];
    v13 = a5;
    MEMORY[0x1863245C0](a1, a2, a3: v8, a4, a5: 0);
    result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD))(v5
                                                                                            + *(_QWORD *)(v6 + 8LL * (*v12 >> 3) + 200)))(
               a1: 4,
               a2: v9,
               a3: v12,
               a4: v12,
               a5: v6 + 8LL * (unsigned int)v12[4],
               a6: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
