// sub_1932B97AC
// rva 0x132b97ac  size 407  section .text  group text
// window base 0x1932b97ac: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B97AC(
        _DWORD a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        char a12)
{
  signed __int64 v12; // rax
  void *v13; // rsp
  __int64 v14; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  _BYTE *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // ebp
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdi
  unsigned int v36[8]; // [rsp+0h] [rbp-2078h] BYREF
  _BYTE *v37; // [rsp+20h] [rbp-2058h]
  _BYTE v38[8192]; // [rsp+30h] [rbp-2048h] BYREF
  unsigned __int64 v39; // [rsp+2030h] [rbp-48h]

  v13 = alloca(v12);
  v39 = (unsigned __int64)v36 ^ MEMORY[0x336F80];
  LODWORD(v14) = a11;
  if ( a5 != 0 )
  {
    if ( a6 < 0
      || a11 < 0
      || (v22 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64))(*(_QWORD *)a4 + 1368LL))(a1: a11, a2, a3: a5))
       - a6 < (int)v14 )
    {
      JNU_ThrowByName(a1: v14, (_DWORD)a2, a3: 545176, a4, a5: 0);
      return sub_1932C8DE0(a1: v14, a2, a3: v19, a4: (unsigned __int64)v36 ^ v39, a5: v20, a6: v21);
    }
    if ( (_DWORD)v14 != 0 )
    {
      if ( (int)v14 <= 0x2000 )
      {
        v23 = v38;
      }
      else
      {
        v23 = (_BYTE *)MEMORY[0x79AD0](a1: v14, a2, a3: v19, a4: v14);
        if ( v23 == nullptr )
        {
          sub_1932B15D0(a1: v14, a2: 0, a3: 0, a4);
          return sub_1932C8DE0(a1: v14, a2, a3: v19, a4: (unsigned __int64)v36 ^ v39, a5: v20, a6: v21);
        }
      }
      v24 = *(_QWORD *)a4;
      v37 = v23;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64, __int64, _QWORD, _QWORD))(v24 + 1600))(
        a1: v14,
        a2: v23,
        a3: a5,
        a4,
        a5: (unsigned int)a6,
        a6: (unsigned int)v14);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
             a1: v25,
             a2: v26,
             a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
             a4) == 0 )
      {
        v27 = 0;
        while ( 1 )
        {
          v28 = sub_1932B8E78(a1: v14, (__int64)a2, a3, a4);
          if ( v28 == -1 )
            break;
          v32 = v30 + v27;
          if ( a12 == 1 )
            v33 = sub_1932B8EBC(a1: v29, a2: v30, a3: v32, a4: v28, a5: (unsigned int)v29, a6: v31, a7: v36[0]);
          else
            v33 = sub_1932B9224(a1: v29, a2: v30, a3: v32, a4: v28, a5: (unsigned int)v29, a6: v31, a7: v36[0]);
          if ( v33 == -1 )
          {
            sub_1932B1580(a1: v34, a2, a3: 545216, a4);
            goto LABEL_22;
          }
          v27 += v33;
          v14 = (unsigned int)(v34 - v33);
          if ( (int)v14 <= 0 )
            goto LABEL_22;
        }
        sub_1932B1570(a1: v29, a2: v30, a3: 543576, a4);
      }
LABEL_22:
      if ( a2 != v38 )
        MEMORY[0x79AE0](a1: v14, a2, a3: v19, a4: a2);
    }
  }
  else
  {
    sub_1932B15C0(a1: a11, a2, a3: 0, a4);
  }
  return sub_1932C8DE0(a1: v14, a2, a3: v19, a4: (unsigned __int64)v36 ^ v39, a5: v20, a6: v21);
}
