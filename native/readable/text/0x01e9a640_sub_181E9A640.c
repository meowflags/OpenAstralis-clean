// sub_1E9A640
// rva 0x01e9a640  size 175  section .text  group text
// window base 0x181e9a640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9A640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // [rsp+10h] [rbp-8h]

  if ( *(_BYTE *)(v5 + 376613820) == 0 )
  {
    v8 = a5;
    sub_1E9AB20(a1, a2, a3: v5 + 376613784);
    a5 = v8;
  }
  *(_QWORD *)(a5 + 24) = 0;
  *(_QWORD *)(a5 + 40) = 0;
  *(_QWORD *)(a5 + 32) = 0;
  *(_QWORD *)(a5 + 184) = *(_QWORD *)(v5 + 376656352);
  *(_QWORD *)(a5 + 136) = MEMORY[0x11b12970]/* 0x11b12970 */;
  *(_QWORD *)(a5 + 120) = 0;
  result = *(_QWORD *)(v6 + 184) >> 6;
  *(_QWORD *)(v6 + 192) = result;
  *(_DWORD *)(a5 + 344) = 0;
  *(_DWORD *)(a5 + 348) = 0;
  *(_DWORD *)(a5 + 340) = 0;
  *(_DWORD *)(a5 + 352) = 0;
  return result;
}
