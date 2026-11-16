// sub_2755720
// rva 0x02755720  size 287  section .text  group text
// window base 0x182755720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2755720(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  unsigned int v14; // r8d
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_21;
  if ( a5 != v6 && a5[2] == 3 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 || v6[2 * v9] >> 3 == 4281537 )
    {
      v10 = (unsigned int)a5[4];
      if ( (_DWORD)v10 == 0
        || (v11 = v6[2 * v10] >> 3,
            a2 = v6[2 * v11 + 11] & (0x1918u >> HIBYTE(v6[2 * v11 + 11])),
            (unsigned __int16)v6[2 * (unsigned int)v6[2 * v11 + 5] + 3 + a2] == 6424) )
      {
        v12 = (unsigned int)a5[5];
        if ( (_DWORD)v12 != 0 )
        {
          v13 = v6[2 * v12] >> 3;
          switch ( v13 )
          {
            case 4260808:
              v14 = v6[2 * v12 + 1];
              goto LABEL_11;
            case 4288437:
              v14 = SLOBYTE(v6[2 * v12 + 1]);
              goto LABEL_11;
            case 4288459:
              v14 = SLOWORD(v6[2 * v12 + 1]);
              goto LABEL_11;
            case 4288481:
              v14 = LOWORD(v6[2 * v12 + 1]);
LABEL_11:
              result = a6(a1, a2, a3: &v6[2 * v9], a4: v14, a5: &v6[2 * v10], a6: v14);
              if ( *(int *)(v7 + 16) <= 0 )
                return sub_277F280(a1: v17, a2: v18, a3: v16);
              return result;
            default:
              break;
          }
        }
      }
    }
  }
  sub_2757000(a1, a2, a3: a5);
LABEL_21:
  sub_1EB84E0();
  __builtin_debugtrap();
  return sub_2755840();
}
