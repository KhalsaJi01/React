import logo from './logo.svg';
import './App.css';
import { useEffect, useState } from 'react';

function App() {
  //useState jehda hai  [text,setText] array return karda hai  
        const [text,setText]= useState('');
        const [name,setName] = useState('Hello123');
//Variation 1 of useEffect ehde vich jadh vi pura component render ho jayeda change to baad tadh jo console.log wich likheya hai print hoyuga 
        // useEffect(()=>{
        //   console.log("change observed");
        // });
//Variation 2 of useEffect ehde ase second empty paramete [] pass kita hai ta ki sif sarting wich hi ek vaar chale baas 
        // useEffect(()=>{
        //   console.log("change observed")
        // },[]);
//Variation 3 wich asse dekheyas hai ki sirf jaddo name change houga tahe chaluga nahe ta nahe chaluga + first time
        // useEffect(()=>{
        //   console.log("change observed");
        // },[name]);
        
        useEffect(()=>{
          //add the event listner
          console.log("hello noone ");
          return ()=>{
            //remove event listner
            console.log("hello everyone")
          }
        },[]);
      //change handeler function et text use kaar reha hai jehda aase uppar use kitta hai
      //hunha ki hunn eh variable const hai parr fer ve value change ho rahe hai ehnu ehda samjo ki array const hai wich de values change ho sakde hai
      // jive tusse ek bus de ticket laye hai tusse jaa uss hi bus vich hi jaa sakde ho p-aar seat koi lai sakde ho change kaar sakde ho
        function changeHandler(event){
          setText(event.target.value);
          console.log(text);
        }
        //app component retun kaar reha hai eh java code jo saanu ui tevisible houga 
        return ( 
          <div>
            <input type='text' onChange={changeHandler}></input>
          </div>
        ); 
}

export default App;
